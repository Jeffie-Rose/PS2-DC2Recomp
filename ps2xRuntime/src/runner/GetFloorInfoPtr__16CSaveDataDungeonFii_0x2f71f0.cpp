#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFloorInfoPtr__16CSaveDataDungeonFii
// Address: 0x2f71f0 - 0x2f7310
void GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0");
#endif

    switch (ctx->pc) {
        case 0x2f7260u: goto label_2f7260;
        case 0x2f72ccu: goto label_2f72cc;
        default: break;
    }

    ctx->pc = 0x2f71f0u;

    // 0x2f71f0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F71F0u;
    {
        const bool branch_taken_0x2f71f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F71F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71F0u;
            // 0x2f71f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71f0) {
            ctx->pc = 0x2F7208u;
            goto label_2f7208;
        }
    }
    ctx->pc = 0x2F71F8u;
    // 0x2f71f8: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x2f71f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f71fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F71FCu;
    {
        const bool branch_taken_0x2f71fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f71fc) {
            ctx->pc = 0x2F7210u;
            goto label_2f7210;
        }
    }
    ctx->pc = 0x2F7204u;
    // 0x2f7204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7208:
    // 0x2f7208: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2F7208u;
    {
        const bool branch_taken_0x2f7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7208) {
            ctx->pc = 0x2F7308u;
            goto label_2f7308;
        }
    }
    ctx->pc = 0x2F7210u;
label_2f7210:
    // 0x2f7210: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F7210u;
    {
        const bool branch_taken_0x2f7210 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2F7214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7210u;
            // 0x2f7214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7210) {
            ctx->pc = 0x2F723Cu;
            goto label_2f723c;
        }
    }
    ctx->pc = 0x2F7218u;
    // 0x2f7218: 0x3c0c0036  lui         $t4, 0x36
    ctx->pc = 0x2f7218u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)54 << 16));
    // 0x2f721c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2f721cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2f7220: 0x258cced0  addiu       $t4, $t4, -0x3130
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294954704));
    // 0x2f7224: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2f7224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2f7228: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2f7228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f722c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2f722cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f7230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7230u;
    {
        const bool branch_taken_0x2f7230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7230u;
            // 0x2f7234: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7230) {
            ctx->pc = 0x2F7244u;
            goto label_2f7244;
        }
    }
    ctx->pc = 0x2F7238u;
    // 0x2f7238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f723c:
    // 0x2f723c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F723Cu;
    {
        const bool branch_taken_0x2f723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f723c) {
            ctx->pc = 0x2F7308u;
            goto label_2f7308;
        }
    }
    ctx->pc = 0x2F7244u;
label_2f7244:
    // 0x2f7244: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2f7244u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7248: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F7248u;
    {
        const bool branch_taken_0x2f7248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7248u;
            // 0x2f724c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7248) {
            ctx->pc = 0x2F72ECu;
            goto label_2f72ec;
        }
    }
    ctx->pc = 0x2F7250u;
    // 0x2f7250: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x2f7250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f7254: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F7254u;
    {
        const bool branch_taken_0x2f7254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7254u;
            // 0x2f7258: 0x24affff8  addiu       $t7, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7254) {
            ctx->pc = 0x2F72B4u;
            goto label_2f72b4;
        }
    }
    ctx->pc = 0x2F725Cu;
    // 0x2f725c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2f725cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7260:
    // 0x2f7260: 0x198c821  addu        $t9, $t4, $t8
    ctx->pc = 0x2f7260u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x2f7264: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x2f7264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x2f7268: 0x87270000  lh          $a3, 0x0($t9)
    ctx->pc = 0x2f7268u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2f726c: 0x1cf102a  slt         $v0, $t6, $t7
    ctx->pc = 0x2f726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2f7270: 0x87230002  lh          $v1, 0x2($t9)
    ctx->pc = 0x2f7270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x2f7274: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x2f7274u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x2f7278: 0x872b0004  lh          $t3, 0x4($t9)
    ctx->pc = 0x2f7278u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x2f727c: 0x872a0006  lh          $t2, 0x6($t9)
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 6)));
    // 0x2f7280: 0x87290008  lh          $t1, 0x8($t9)
    ctx->pc = 0x2f7280u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2f7284: 0x8728000a  lh          $t0, 0xA($t9)
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x2f7288: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2f7288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2f728c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2f7290: 0x8727000c  lh          $a3, 0xC($t9)
    ctx->pc = 0x2f7290u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x2f7294: 0x8723000e  lh          $v1, 0xE($t9)
    ctx->pc = 0x2f7294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 14)));
    // 0x2f7298: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x2f7298u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2f729c: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x2f729cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2f72a0: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x2f72a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x2f72a4: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2f72a8: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2f72a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2f72ac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F72ACu;
    {
        const bool branch_taken_0x2f72ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F72B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72ACu;
            // 0x2f72b0: 0x1a36821  addu        $t5, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72ac) {
            ctx->pc = 0x2F7260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F72B4u;
label_2f72b4:
    // 0x2f72b4: 0x0  nop
    ctx->pc = 0x2f72b4u;
    // NOP
    // 0x2f72b8: 0x1c5082a  slt         $at, $t6, $a1
    ctx->pc = 0x2f72b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f72bc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2F72BCu;
    {
        const bool branch_taken_0x2f72bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F72C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72BCu;
            // 0x2f72c0: 0xe4040  sll         $t0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72bc) {
            ctx->pc = 0x2F72ECu;
            goto label_2f72ec;
        }
    }
    ctx->pc = 0x2F72C4u;
    // 0x2f72c4: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2f72c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2f72c8: 0x24e7ced0  addiu       $a3, $a3, -0x3130
    ctx->pc = 0x2f72c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954704));
label_2f72cc:
    // 0x2f72cc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x2f72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f72d0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2f72d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2f72d4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2f72d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f72d8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2f72d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2f72dc: 0x1c5102a  slt         $v0, $t6, $a1
    ctx->pc = 0x2f72dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f72e0: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2f72e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2f72e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F72E4u;
    {
        const bool branch_taken_0x2f72e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f72e4) {
            ctx->pc = 0x2F72CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f72cc;
        }
    }
    ctx->pc = 0x2F72ECu;
label_2f72ec:
    // 0x2f72ec: 0x0  nop
    ctx->pc = 0x2f72ecu;
    // NOP
    // 0x2f72f0: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x2f72f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x2f72f4: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x2f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2f72f8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2f72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2f72fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f7300: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7304: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2f7304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2f7308:
    // 0x2f7308: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7310u;
}
