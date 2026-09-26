#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFishPlace__14FISH_PLACE_MAPFP10FISH_PLACEii
// Address: 0x303890 - 0x303aa0
void SetFishPlace__14FISH_PLACE_MAPFP10FISH_PLACEii_0x303890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFishPlace__14FISH_PLACE_MAPFP10FISH_PLACEii_0x303890");
#endif

    switch (ctx->pc) {
        case 0x3038b8u: goto label_3038b8;
        case 0x303948u: goto label_303948;
        case 0x303984u: goto label_303984;
        case 0x30399cu: goto label_30399c;
        default: break;
    }

    ctx->pc = 0x303890u;

    // 0x303890: 0x10e00035  beqz        $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x303890u;
    {
        const bool branch_taken_0x303890 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x303894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303890u;
            // 0x303894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303890) {
            ctx->pc = 0x303968u;
            goto label_303968;
        }
    }
    ctx->pc = 0x303898u;
    // 0x303898: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x303898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30389c: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x30389Cu;
    {
        const bool branch_taken_0x30389c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3038A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30389Cu;
            // 0x3038a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30389c) {
            ctx->pc = 0x303968u;
            goto label_303968;
        }
    }
    ctx->pc = 0x3038A4u;
    // 0x3038a4: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x3038a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3038a8: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3038A8u;
    {
        const bool branch_taken_0x3038a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3038ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3038A8u;
            // 0x3038ac: 0x24cafff8  addiu       $t2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038a8) {
            ctx->pc = 0x30392Cu;
            goto label_30392c;
        }
    }
    ctx->pc = 0x3038B0u;
    // 0x3038b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3038b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3038b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3038b8:
    // 0x3038b8: 0xab6021  addu        $t4, $a1, $t3
    ctx->pc = 0x3038b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3038bc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3038bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3038c0: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x3038c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x3038c4: 0x12a182a  slt         $v1, $t1, $t2
    ctx->pc = 0x3038c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3038c8: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x3038c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x3038cc: 0x256b0060  addiu       $t3, $t3, 0x60
    ctx->pc = 0x3038ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x3038d0: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x3038d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x3038d4: 0xad88000c  sw          $t0, 0xC($t4)
    ctx->pc = 0x3038d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 8));
    // 0x3038d8: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x3038d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
    // 0x3038dc: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x3038dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x3038e0: 0xad880018  sw          $t0, 0x18($t4)
    ctx->pc = 0x3038e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 8));
    // 0x3038e4: 0xad800020  sw          $zero, 0x20($t4)
    ctx->pc = 0x3038e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 0));
    // 0x3038e8: 0xad80001c  sw          $zero, 0x1C($t4)
    ctx->pc = 0x3038e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 0));
    // 0x3038ec: 0xad880024  sw          $t0, 0x24($t4)
    ctx->pc = 0x3038ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 8));
    // 0x3038f0: 0xad80002c  sw          $zero, 0x2C($t4)
    ctx->pc = 0x3038f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 0));
    // 0x3038f4: 0xad800028  sw          $zero, 0x28($t4)
    ctx->pc = 0x3038f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 0));
    // 0x3038f8: 0xad880030  sw          $t0, 0x30($t4)
    ctx->pc = 0x3038f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 8));
    // 0x3038fc: 0xad800038  sw          $zero, 0x38($t4)
    ctx->pc = 0x3038fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 0));
    // 0x303900: 0xad800034  sw          $zero, 0x34($t4)
    ctx->pc = 0x303900u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 0));
    // 0x303904: 0xad88003c  sw          $t0, 0x3C($t4)
    ctx->pc = 0x303904u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 8));
    // 0x303908: 0xad800044  sw          $zero, 0x44($t4)
    ctx->pc = 0x303908u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 0));
    // 0x30390c: 0xad800040  sw          $zero, 0x40($t4)
    ctx->pc = 0x30390cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 0));
    // 0x303910: 0xad880048  sw          $t0, 0x48($t4)
    ctx->pc = 0x303910u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 72), GPR_U32(ctx, 8));
    // 0x303914: 0xad800050  sw          $zero, 0x50($t4)
    ctx->pc = 0x303914u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 80), GPR_U32(ctx, 0));
    // 0x303918: 0xad80004c  sw          $zero, 0x4C($t4)
    ctx->pc = 0x303918u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 76), GPR_U32(ctx, 0));
    // 0x30391c: 0xad880054  sw          $t0, 0x54($t4)
    ctx->pc = 0x30391cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 84), GPR_U32(ctx, 8));
    // 0x303920: 0xad80005c  sw          $zero, 0x5C($t4)
    ctx->pc = 0x303920u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 92), GPR_U32(ctx, 0));
    // 0x303924: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x303924u;
    {
        const bool branch_taken_0x303924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303924u;
            // 0x303928: 0xad800058  sw          $zero, 0x58($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303924) {
            ctx->pc = 0x3038B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3038b8;
        }
    }
    ctx->pc = 0x30392Cu;
label_30392c:
    // 0x30392c: 0x0  nop
    ctx->pc = 0x30392cu;
    // NOP
    // 0x303930: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x303930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x303934: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x303934u;
    {
        const bool branch_taken_0x303934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303934u;
            // 0x303938: 0x91840  sll         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303934) {
            ctx->pc = 0x303968u;
            goto label_303968;
        }
    }
    ctx->pc = 0x30393Cu;
    // 0x30393c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x30393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x303940: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x303940u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303944: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x303944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_303948:
    // 0x303948: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x303948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x30394c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30394cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x303950: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x303950u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x303954: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x303954u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x303958: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x303958u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x30395c: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x30395cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x303960: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x303960u;
    {
        const bool branch_taken_0x303960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303960u;
            // 0x303964: 0xad600004  sw          $zero, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303960) {
            ctx->pc = 0x303948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303948;
        }
    }
    ctx->pc = 0x303968u;
label_303968:
    // 0x303968: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x303968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30396c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x30396cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x303970: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303970u;
    {
        const bool branch_taken_0x303970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303970u;
            // 0x303974: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303970) {
            ctx->pc = 0x30397Cu;
            goto label_30397c;
        }
    }
    ctx->pc = 0x303978u;
    // 0x303978: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x303978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
label_30397c:
    // 0x30397c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x30397Cu;
    {
        const bool branch_taken_0x30397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30397Cu;
            // 0x303980: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30397c) {
            ctx->pc = 0x303A88u;
            goto label_303a88;
        }
    }
    ctx->pc = 0x303984u;
label_303984:
    // 0x303984: 0x14e00036  bnez        $a3, . + 4 + (0x36 << 2)
    ctx->pc = 0x303984u;
    {
        const bool branch_taken_0x303984 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x303988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303984u;
            // 0x303988: 0x24690028  addiu       $t1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303984) {
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x30398Cu;
    // 0x30398c: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x30398cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x303990: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x303990u;
    {
        const bool branch_taken_0x303990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303990u;
            // 0x303994: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303990) {
            ctx->pc = 0x303A80u;
            goto label_303a80;
        }
    }
    ctx->pc = 0x303998u;
    // 0x303998: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x303998u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30399c:
    // 0x30399c: 0x0  nop
    ctx->pc = 0x30399cu;
    // NOP
    // 0x3039a0: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x3039a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3039a4: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x3039a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3039a8: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3039A8u;
    {
        const bool branch_taken_0x3039a8 = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x3039a8) {
            ctx->pc = 0x3039BCu;
            goto label_3039bc;
        }
    }
    ctx->pc = 0x3039B0u;
    // 0x3039b0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3039b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3039b4: 0x146d0023  bne         $v1, $t5, . + 4 + (0x23 << 2)
    ctx->pc = 0x3039B4u;
    {
        const bool branch_taken_0x3039b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x3039b4) {
            ctx->pc = 0x303A44u;
            goto label_303a44;
        }
    }
    ctx->pc = 0x3039BCu;
label_3039bc:
    // 0x3039bc: 0x0  nop
    ctx->pc = 0x3039bcu;
    // NOP
    // 0x3039c0: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x3039c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3039c4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3039c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3039c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3039cc: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x3039ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3039d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3039d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3039d4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3039D4u;
    {
        const bool branch_taken_0x3039d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3039d4) {
            ctx->pc = 0x3039E0u;
            goto label_3039e0;
        }
    }
    ctx->pc = 0x3039DCu;
    // 0x3039dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3039dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3039e0:
    // 0x3039e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3039e4: 0xac5821  addu        $t3, $a1, $t4
    ctx->pc = 0x3039e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3039e8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x3039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x3039ec: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x3039ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3039f0: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3039f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3039f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3039f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3039f8: 0x0  nop
    ctx->pc = 0x3039f8u;
    // NOP
    // 0x3039fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3039FCu;
    {
        const bool branch_taken_0x3039fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3039fc) {
            ctx->pc = 0x303A0Cu;
            goto label_303a0c;
        }
    }
    ctx->pc = 0x303A04u;
    // 0x303a04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x303A04u;
    {
        const bool branch_taken_0x303a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303A04u;
            // 0x303a08: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a04) {
            ctx->pc = 0x303A14u;
            goto label_303a14;
        }
    }
    ctx->pc = 0x303A0Cu;
label_303a0c:
    // 0x303a0c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x303a0cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x303a10: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x303a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_303a14:
    // 0x303a14: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x303a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303a18: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x303a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303a1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x303a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303a20: 0x0  nop
    ctx->pc = 0x303a20u;
    // NOP
    // 0x303a24: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x303A24u;
    {
        const bool branch_taken_0x303a24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303a24) {
            ctx->pc = 0x303A34u;
            goto label_303a34;
        }
    }
    ctx->pc = 0x303A2Cu;
    // 0x303a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x303A2Cu;
    {
        const bool branch_taken_0x303a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303A2Cu;
            // 0x303a30: 0xe5400008  swc1        $f0, 0x8($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a2c) {
            ctx->pc = 0x303A3Cu;
            goto label_303a3c;
        }
    }
    ctx->pc = 0x303A34u;
label_303a34:
    // 0x303a34: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x303a34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x303a38: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x303a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_303a3c:
    // 0x303a3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x303A3Cu;
    {
        const bool branch_taken_0x303a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a3c) {
            ctx->pc = 0x303A80u;
            goto label_303a80;
        }
    }
    ctx->pc = 0x303A44u;
label_303a44:
    // 0x303a44: 0x0  nop
    ctx->pc = 0x303a44u;
    // NOP
    // 0x303a48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x303a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x303a4c: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x303a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x303a50: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x303A50u;
    {
        const bool branch_taken_0x303a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303A50u;
            // 0x303a54: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a50) {
            ctx->pc = 0x30399Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30399c;
        }
    }
    ctx->pc = 0x303A58u;
    // 0x303a58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x303A58u;
    {
        const bool branch_taken_0x303a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a58) {
            ctx->pc = 0x303A80u;
            goto label_303a80;
        }
    }
    ctx->pc = 0x303A60u;
label_303a60:
    // 0x303a60: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x303a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x303a64: 0xac5021  addu        $t2, $a1, $t4
    ctx->pc = 0x303a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x303a68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303a6c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x303a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x303a70: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x303a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303a74: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x303a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x303a78: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x303a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303a7c: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x303a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_303a80:
    // 0x303a80: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x303a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x303a84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x303a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_303a88:
    // 0x303a88: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x303a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x303a8c: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x303a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303a90: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x303A90u;
    {
        const bool branch_taken_0x303a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303A90u;
            // 0x303a94: 0x8c1821  addu        $v1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a90) {
            ctx->pc = 0x303984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303984;
        }
    }
    ctx->pc = 0x303A98u;
    // 0x303a98: 0x3e00008  jr          $ra
    ctx->pc = 0x303A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303AA0u;
}
