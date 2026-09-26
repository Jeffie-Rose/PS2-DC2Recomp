#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLiveNPC__8CEditMapFii
// Address: 0x2ee660 - 0x2ee768
void CheckLiveNPC__8CEditMapFii_0x2ee660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLiveNPC__8CEditMapFii_0x2ee660");
#endif

    switch (ctx->pc) {
        case 0x2ee69cu: goto label_2ee69c;
        case 0x2ee6a4u: goto label_2ee6a4;
        default: break;
    }

    ctx->pc = 0x2ee660u;

    // 0x2ee660: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ee660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ee664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ee664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ee668: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee670: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ee670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee678: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ee678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee680: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ee680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ee688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee690: 0x8c900d44  lw          $s0, 0xD44($a0)
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x2ee694: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EE694u;
    {
        const bool branch_taken_0x2ee694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE694u;
            // 0x2ee698: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee694) {
            ctx->pc = 0x2EE730u;
            goto label_2ee730;
        }
    }
    ctx->pc = 0x2EE69Cu;
label_2ee69c:
    // 0x2ee69c: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EE69Cu;
    SET_GPR_U32(ctx, 31, 0x2EE6A4u);
    ctx->pc = 0x2EE6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE69Cu;
            // 0x2ee6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE6A4u; }
        if (ctx->pc != 0x2EE6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE6A4u; }
        if (ctx->pc != 0x2EE6A4u) { return; }
    }
    ctx->pc = 0x2EE6A4u;
label_2ee6a4:
    // 0x2ee6a4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EE6A4u;
    {
        const bool branch_taken_0x2ee6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6a4) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE6ACu;
    // 0x2ee6ac: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x2ee6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x2ee6b0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EE6B0u;
    {
        const bool branch_taken_0x2ee6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6b0) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE6B8u;
    // 0x2ee6b8: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE6B8u;
    {
        const bool branch_taken_0x2ee6b8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x2ee6b8) {
            ctx->pc = 0x2EE6DCu;
            goto label_2ee6dc;
        }
    }
    ctx->pc = 0x2EE6C0u;
    // 0x2ee6c0: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE6C0u;
    {
        const bool branch_taken_0x2ee6c0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2ee6c0) {
            ctx->pc = 0x2EE6DCu;
            goto label_2ee6dc;
        }
    }
    ctx->pc = 0x2EE6C8u;
    // 0x2ee6c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ee6cc: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EE6CCu;
    {
        const bool branch_taken_0x2ee6cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ee6cc) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE6D4u;
    // 0x2ee6d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE6D4u;
    {
        const bool branch_taken_0x2ee6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6D4u;
            // 0x2ee6d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6d4) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE6DCu;
label_2ee6dc:
    // 0x2ee6dc: 0x0  nop
    ctx->pc = 0x2ee6dcu;
    // NOP
    // 0x2ee6e0: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE6E0u;
    {
        const bool branch_taken_0x2ee6e0 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2ee6e0) {
            ctx->pc = 0x2EE6F8u;
            goto label_2ee6f8;
        }
    }
    ctx->pc = 0x2EE6E8u;
    // 0x2ee6e8: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x2ee6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x2ee6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee6f0: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE6F0u;
    {
        const bool branch_taken_0x2ee6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ee6f0) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE6F8u;
label_2ee6f8:
    // 0x2ee6f8: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE6F8u;
    {
        const bool branch_taken_0x2ee6f8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2ee6f8) {
            ctx->pc = 0x2EE714u;
            goto label_2ee714;
        }
    }
    ctx->pc = 0x2EE700u;
    // 0x2ee700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ee704: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE704u;
    {
        const bool branch_taken_0x2ee704 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EE708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE704u;
            // 0x2ee708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee704) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE70Cu;
    // 0x2ee70c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EE70Cu;
    {
        const bool branch_taken_0x2ee70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE70Cu;
            // 0x2ee710: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee70c) {
            ctx->pc = 0x2EE748u;
            goto label_2ee748;
        }
    }
    ctx->pc = 0x2EE714u;
label_2ee714:
    // 0x2ee714: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ee718: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE718u;
    {
        const bool branch_taken_0x2ee718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2EE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE718u;
            // 0x2ee71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee718) {
            ctx->pc = 0x2EE728u;
            goto label_2ee728;
        }
    }
    ctx->pc = 0x2EE720u;
    // 0x2ee720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE720u;
    {
        const bool branch_taken_0x2ee720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee720) {
            ctx->pc = 0x2EE744u;
            goto label_2ee744;
        }
    }
    ctx->pc = 0x2EE728u;
label_2ee728:
    // 0x2ee728: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ee72c: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x2ee72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_2ee730:
    // 0x2ee730: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
    // 0x2ee734: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ee734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee738: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2EE738u;
    {
        const bool branch_taken_0x2ee738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE738u;
            // 0x2ee73c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee738) {
            ctx->pc = 0x2EE69Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee69c;
        }
    }
    ctx->pc = 0x2EE740u;
    // 0x2ee740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee744:
    // 0x2ee744: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ee744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ee748:
    // 0x2ee748: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ee748u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee74c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee74cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee760: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE760u;
            // 0x2ee764: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE768u;
}
