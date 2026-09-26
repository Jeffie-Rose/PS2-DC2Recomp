#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGeoramaMateria__FP22TRESURE_BOX_FLOOR_INFOiPi
// Address: 0x1ec990 - 0x1ecb50
void CheckGeoramaMateria__FP22TRESURE_BOX_FLOOR_INFOiPi_0x1ec990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGeoramaMateria__FP22TRESURE_BOX_FLOOR_INFOiPi_0x1ec990");
#endif

    switch (ctx->pc) {
        case 0x1ec9e4u: goto label_1ec9e4;
        case 0x1eca0cu: goto label_1eca0c;
        case 0x1eca68u: goto label_1eca68;
        case 0x1ecad4u: goto label_1ecad4;
        case 0x1ecadcu: goto label_1ecadc;
        case 0x1ecaf0u: goto label_1ecaf0;
        case 0x1ecb08u: goto label_1ecb08;
        default: break;
    }

    ctx->pc = 0x1ec990u;

    // 0x1ec990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec99c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec9a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC9A0u;
    {
        const bool branch_taken_0x1ec9a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9A0u;
            // 0x1ec9a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9a0) {
            ctx->pc = 0x1EC9B0u;
            goto label_1ec9b0;
        }
    }
    ctx->pc = 0x1EC9A8u;
    // 0x1ec9a8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1EC9A8u;
    {
        const bool branch_taken_0x1ec9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9A8u;
            // 0x1ec9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9a8) {
            ctx->pc = 0x1ECB3Cu;
            goto label_1ecb3c;
        }
    }
    ctx->pc = 0x1EC9B0u;
label_1ec9b0:
    // 0x1ec9b0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC9B0u;
    {
        const bool branch_taken_0x1ec9b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1EC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9B0u;
            // 0x1ec9b4: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9b0) {
            ctx->pc = 0x1EC9C0u;
            goto label_1ec9c0;
        }
    }
    ctx->pc = 0x1EC9B8u;
    // 0x1ec9b8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1EC9B8u;
    {
        const bool branch_taken_0x1ec9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9B8u;
            // 0x1ec9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9b8) {
            ctx->pc = 0x1ECB3Cu;
            goto label_1ecb3c;
        }
    }
    ctx->pc = 0x1EC9C0u;
label_1ec9c0:
    // 0x1ec9c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ec9c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ec9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ec9c8: 0x34212208  ori         $at, $at, 0x2208
    ctx->pc = 0x1ec9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8712);
    // 0x1ec9cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec9d0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1ec9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1ec9d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ec9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ec9d8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ec9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ec9dc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EC9DCu;
    {
        const bool branch_taken_0x1ec9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9DCu;
            // 0x1ec9e0: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9dc) {
            ctx->pc = 0x1ECAB4u;
            goto label_1ecab4;
        }
    }
    ctx->pc = 0x1EC9E4u;
label_1ec9e4:
    // 0x1ec9e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec9e8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ec9ec: 0x4e00037  bltz        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EC9ECu;
    {
        const bool branch_taken_0x1ec9ec = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1EC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9ECu;
            // 0x1ec9f0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9ec) {
            ctx->pc = 0x1ECACCu;
            goto label_1ecacc;
        }
    }
    ctx->pc = 0x1EC9F4u;
    // 0x1ec9f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9f8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1ec9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1ec9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca00: 0x8c252204  lw          $a1, 0x2204($at)
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x1eca04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ECA04u;
    {
        const bool branch_taken_0x1eca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA04u;
            // 0x1eca08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca04) {
            ctx->pc = 0x1ECA48u;
            goto label_1eca48;
        }
    }
    ctx->pc = 0x1ECA0Cu;
label_1eca0c:
    // 0x1eca0c: 0x0  nop
    ctx->pc = 0x1eca0cu;
    // NOP
    // 0x1eca10: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1eca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1eca14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1eca18: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECA18u;
    {
        const bool branch_taken_0x1eca18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ECA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA18u;
            // 0x1eca1c: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca18) {
            ctx->pc = 0x1ECA3Cu;
            goto label_1eca3c;
        }
    }
    ctx->pc = 0x1ECA20u;
    // 0x1eca20: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eca24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1eca24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1eca28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eca2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eca30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eca34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECA34u;
    {
        const bool branch_taken_0x1eca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA34u;
            // 0x1eca38: 0x24680004  addiu       $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca34) {
            ctx->pc = 0x1ECA54u;
            goto label_1eca54;
        }
    }
    ctx->pc = 0x1ECA3Cu;
label_1eca3c:
    // 0x1eca3c: 0x0  nop
    ctx->pc = 0x1eca3cu;
    // NOP
    // 0x1eca40: 0x25290488  addiu       $t1, $t1, 0x488
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1160));
    // 0x1eca44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1eca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1eca48:
    // 0x1eca48: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1eca48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1eca4c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1ECA4Cu;
    {
        const bool branch_taken_0x1eca4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca4c) {
            ctx->pc = 0x1ECA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eca0c;
        }
    }
    ctx->pc = 0x1ECA54u;
label_1eca54:
    // 0x1eca54: 0x0  nop
    ctx->pc = 0x1eca54u;
    // NOP
    // 0x1eca58: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ECA58u;
    {
        const bool branch_taken_0x1eca58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA58u;
            // 0x1eca5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca58) {
            ctx->pc = 0x1ECAA8u;
            goto label_1ecaa8;
        }
    }
    ctx->pc = 0x1ECA60u;
    // 0x1eca60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ECA60u;
    {
        const bool branch_taken_0x1eca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA60u;
            // 0x1eca64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca60) {
            ctx->pc = 0x1ECA94u;
            goto label_1eca94;
        }
    }
    ctx->pc = 0x1ECA68u;
label_1eca68:
    // 0x1eca68: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1eca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1eca6c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1eca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1eca70: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1eca74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1eca78: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1eca7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eca80: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eca84: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1eca84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1eca88: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1eca8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eca90: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1eca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1eca94:
    // 0x1eca94: 0x0  nop
    ctx->pc = 0x1eca94u;
    // NOP
    // 0x1eca98: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1eca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1eca9c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ecaa0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1ECAA0u;
    {
        const bool branch_taken_0x1ecaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecaa0) {
            ctx->pc = 0x1ECA68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eca68;
        }
    }
    ctx->pc = 0x1ECAA8u;
label_1ecaa8:
    // 0x1ecaa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ecaac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecab0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1ecab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_1ecab4:
    // 0x1ecab4: 0x0  nop
    ctx->pc = 0x1ecab4u;
    // NOP
    // 0x1ecab8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ecab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ecabc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ecabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ecac0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1ecac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ecac4: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1ECAC4u;
    {
        const bool branch_taken_0x1ecac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAC4u;
            // 0x1ecac8: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecac4) {
            ctx->pc = 0x1EC9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec9e4;
        }
    }
    ctx->pc = 0x1ECACCu;
label_1ecacc:
    // 0x1ecacc: 0x0  nop
    ctx->pc = 0x1ecaccu;
    // NOP
    // 0x1ecad0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ecad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecad4:
    // 0x1ecad4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ECAD4u;
    {
        const bool branch_taken_0x1ecad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAD4u;
            // 0x1ecad8: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecad4) {
            ctx->pc = 0x1ECB14u;
            goto label_1ecb14;
        }
    }
    ctx->pc = 0x1ECADCu;
label_1ecadc:
    // 0x1ecadc: 0x0  nop
    ctx->pc = 0x1ecadcu;
    // NOP
    // 0x1ecae0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ecae4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ecae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ecae8: 0xc0657b4  jal         func_195ED0
    ctx->pc = 0x1ECAE8u;
    SET_GPR_U32(ctx, 31, 0x1ECAF0u);
    ctx->pc = 0x1ECAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAE8u;
            // 0x1ecaec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195ED0u;
    if (runtime->hasFunction(0x195ED0u)) {
        auto targetFn = runtime->lookupFunction(0x195ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECAF0u; }
        if (ctx->pc != 0x1ECAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataAttribute__Fi_0x195ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECAF0u; }
        if (ctx->pc != 0x1ECAF0u) { return; }
    }
    ctx->pc = 0x1ECAF0u;
label_1ecaf0:
    // 0x1ecaf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ecaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ecaf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECAF4u;
    {
        const bool branch_taken_0x1ecaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAF4u;
            // 0x1ecaf8: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaf4) {
            ctx->pc = 0x1ECB08u;
            goto label_1ecb08;
        }
    }
    ctx->pc = 0x1ECAFCu;
    // 0x1ecafc: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1ecafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1ecb00: 0xc094400  jal         func_251000
    ctx->pc = 0x1ECB00u;
    SET_GPR_U32(ctx, 31, 0x1ECB08u);
    ctx->pc = 0x1ECB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB00u;
            // 0x1ecb04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB08u; }
        if (ctx->pc != 0x1ECB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB08u; }
        if (ctx->pc != 0x1ECB08u) { return; }
    }
    ctx->pc = 0x1ECB08u;
label_1ecb08:
    // 0x1ecb08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ecb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ecb0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ecb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ecb10: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ecb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1ecb14:
    // 0x1ecb14: 0x0  nop
    ctx->pc = 0x1ecb14u;
    // NOP
    // 0x1ecb18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ecb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ecb1c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1ecb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ecb20: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x1ecb20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ecb24: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1ECB24u;
    {
        const bool branch_taken_0x1ecb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb24) {
            ctx->pc = 0x1ECADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ecadc;
        }
    }
    ctx->pc = 0x1ECB2Cu;
    // 0x1ecb2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ecb30: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ecb30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ecb34: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1ECB34u;
    {
        const bool branch_taken_0x1ecb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb34) {
            ctx->pc = 0x1ECAD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ecad4;
        }
    }
    ctx->pc = 0x1ECB3Cu;
label_1ecb3c:
    // 0x1ecb3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb48: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB48u;
            // 0x1ecb4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECB50u;
}
