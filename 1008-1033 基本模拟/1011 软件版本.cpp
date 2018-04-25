#include <stdio.h>

int main()
{
	int t, NewVersion;
	scanf("%d", &t);
	int MajorVersionNumber1, MinorVersionNumber1, RevisionNumber1;
	int MajorVersionNumber2, MinorVersionNumber2, RevisionNumber2;
	
	while ( t-- ) {
		scanf("%d %d %d", &MajorVersionNumber1, &MinorVersionNumber1, &RevisionNumber1);
		scanf("%d %d %d", &MajorVersionNumber2, &MinorVersionNumber2, &RevisionNumber2);
		
		if ( MajorVersionNumber1 > MajorVersionNumber2 )		
			NewVersion = 1;
		else if ( MajorVersionNumber1 < MajorVersionNumber2 )
			NewVersion = 2;
		else if ( MinorVersionNumber1 > MinorVersionNumber2 )
			NewVersion = 1;
		else if ( MinorVersionNumber1 < MinorVersionNumber2 )
			NewVersion = 2;
		else if ( RevisionNumber1 > RevisionNumber2 )
			NewVersion = 1;
		else if ( RevisionNumber1 < RevisionNumber2 )
			NewVersion = 2;
		else 
			NewVersion = 0;
		
		switch (NewVersion) {
			case 1: printf("First\n"); break;
			case 2: printf("Second\n"); break;
			case 0: printf("Same\n"); break;
		}
	}
	
	return 0;
}
