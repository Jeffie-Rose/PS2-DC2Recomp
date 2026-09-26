#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MENU_PARAM__FP12RS_STACKDATAi
// Address: 0x265f30 - 0x265fd8
void ps2__GET_MENU_PARAM__FP12RS_STACKDATAi_0x265f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MENU_PARAM__FP12RS_STACKDATAi_0x265f30");
#endif

    switch (ctx->pc) {
        case 0x265f88u: goto label_265f88;
        case 0x265f98u: goto label_265f98;
        case 0x265fa8u: goto label_265fa8;
        case 0x265fb8u: goto label_265fb8;
        case 0x265fc8u: goto label_265fc8;
        default: break;
    }

    ctx->pc = 0x265f30u;

    // 0x265f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265f3c: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265F3Cu;
    {
        const bool branch_taken_0x265f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x265F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F3Cu;
            // 0x265f40: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f3c) {
            ctx->pc = 0x265FB8u;
            goto label_265fb8;
        }
    }
    ctx->pc = 0x265F44u;
    // 0x265f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x265f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265f48: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x265F48u;
    {
        const bool branch_taken_0x265f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x265f48) {
            ctx->pc = 0x265FA8u;
            goto label_265fa8;
        }
    }
    ctx->pc = 0x265F50u;
    // 0x265f50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x265f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265f54: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x265F54u;
    {
        const bool branch_taken_0x265f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x265f54) {
            ctx->pc = 0x265F98u;
            goto label_265f98;
        }
    }
    ctx->pc = 0x265F5Cu;
    // 0x265f5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x265f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265f60: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265F60u;
    {
        const bool branch_taken_0x265f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x265f60) {
            ctx->pc = 0x265F88u;
            goto label_265f88;
        }
    }
    ctx->pc = 0x265F68u;
    // 0x265f68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x265f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x265f6c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265F6Cu;
    {
        const bool branch_taken_0x265f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x265F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F6Cu;
            // 0x265f70: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f6c) {
            ctx->pc = 0x265F7Cu;
            goto label_265f7c;
        }
    }
    ctx->pc = 0x265F74u;
    // 0x265f74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x265F74u;
    {
        const bool branch_taken_0x265f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F74u;
            // 0x265f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f74) {
            ctx->pc = 0x265FCCu;
            goto label_265fcc;
        }
    }
    ctx->pc = 0x265F7Cu;
label_265f7c:
    // 0x265f7c: 0x8c25d640  lw          $a1, -0x29C0($at)
    ctx->pc = 0x265f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956608)));
    // 0x265f80: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265F80u;
    SET_GPR_U32(ctx, 31, 0x265F88u);
    ctx->pc = 0x265F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F80u;
            // 0x265f84: 0x24e40020  addiu       $a0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F88u; }
        if (ctx->pc != 0x265F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F88u; }
        if (ctx->pc != 0x265F88u) { return; }
    }
    ctx->pc = 0x265F88u;
label_265f88:
    // 0x265f88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265f8c: 0x8c25d63c  lw          $a1, -0x29C4($at)
    ctx->pc = 0x265f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956604)));
    // 0x265f90: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265F90u;
    SET_GPR_U32(ctx, 31, 0x265F98u);
    ctx->pc = 0x265F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F90u;
            // 0x265f94: 0x24e40018  addiu       $a0, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F98u; }
        if (ctx->pc != 0x265F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F98u; }
        if (ctx->pc != 0x265F98u) { return; }
    }
    ctx->pc = 0x265F98u;
label_265f98:
    // 0x265f98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265f9c: 0x8c25d638  lw          $a1, -0x29C8($at)
    ctx->pc = 0x265f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956600)));
    // 0x265fa0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265FA0u;
    SET_GPR_U32(ctx, 31, 0x265FA8u);
    ctx->pc = 0x265FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265FA0u;
            // 0x265fa4: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FA8u; }
        if (ctx->pc != 0x265FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FA8u; }
        if (ctx->pc != 0x265FA8u) { return; }
    }
    ctx->pc = 0x265FA8u;
label_265fa8:
    // 0x265fa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265fac: 0x8c25d634  lw          $a1, -0x29CC($at)
    ctx->pc = 0x265facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x265fb0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265FB0u;
    SET_GPR_U32(ctx, 31, 0x265FB8u);
    ctx->pc = 0x265FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265FB0u;
            // 0x265fb4: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FB8u; }
        if (ctx->pc != 0x265FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FB8u; }
        if (ctx->pc != 0x265FB8u) { return; }
    }
    ctx->pc = 0x265FB8u;
label_265fb8:
    // 0x265fb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265fbc: 0x8c25d630  lw          $a1, -0x29D0($at)
    ctx->pc = 0x265fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x265fc0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265FC0u;
    SET_GPR_U32(ctx, 31, 0x265FC8u);
    ctx->pc = 0x265FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265FC0u;
            // 0x265fc4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FC8u; }
        if (ctx->pc != 0x265FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FC8u; }
        if (ctx->pc != 0x265FC8u) { return; }
    }
    ctx->pc = 0x265FC8u;
label_265fc8:
    // 0x265fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265fcc:
    // 0x265fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x265FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265FD0u;
            // 0x265fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265FD8u;
}
