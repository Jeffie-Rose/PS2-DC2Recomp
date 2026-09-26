#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _AMG_GET_ATTR_STATUS__FP12RS_STACKDATAi
// Address: 0x27d340 - 0x27d3a0
void ps2__AMG_GET_ATTR_STATUS__FP12RS_STACKDATAi_0x27d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__AMG_GET_ATTR_STATUS__FP12RS_STACKDATAi_0x27d340");
#endif

    switch (ctx->pc) {
        case 0x27d36cu: goto label_27d36c;
        case 0x27d380u: goto label_27d380;
        case 0x27d38cu: goto label_27d38c;
        default: break;
    }

    ctx->pc = 0x27d340u;

    // 0x27d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d350: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D350u;
    {
        const bool branch_taken_0x27d350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D350u;
            // 0x27d354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d350) {
            ctx->pc = 0x27D360u;
            goto label_27d360;
        }
    }
    ctx->pc = 0x27D358u;
    // 0x27d358: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27D358u;
    {
        const bool branch_taken_0x27d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D358u;
            // 0x27d35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d358) {
            ctx->pc = 0x27D390u;
            goto label_27d390;
        }
    }
    ctx->pc = 0x27D360u;
label_27d360:
    // 0x27d360: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27d360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d364: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27D364u;
    SET_GPR_U32(ctx, 31, 0x27D36Cu);
    ctx->pc = 0x27D368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D364u;
            // 0x27d368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D36Cu; }
        if (ctx->pc != 0x27D36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D36Cu; }
        if (ctx->pc != 0x27D36Cu) { return; }
    }
    ctx->pc = 0x27D36Cu;
label_27d36c:
    // 0x27d36c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x27d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x27d370: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d374: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x27d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x27d378: 0xc07654c  jal         func_1D9530
    ctx->pc = 0x27D378u;
    SET_GPR_U32(ctx, 31, 0x27D380u);
    ctx->pc = 0x27D37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D378u;
            // 0x27d37c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9530u;
    if (runtime->hasFunction(0x1D9530u)) {
        auto targetFn = runtime->lookupFunction(0x1D9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D380u; }
        if (ctx->pc != 0x27D380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttrStatus__11CAutoMapGenFPf_0x1d9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D380u; }
        if (ctx->pc != 0x27D380u) { return; }
    }
    ctx->pc = 0x27D380u;
label_27d380:
    // 0x27d380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d384: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D384u;
    SET_GPR_U32(ctx, 31, 0x27D38Cu);
    ctx->pc = 0x27D388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D384u;
            // 0x27d388: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D38Cu; }
        if (ctx->pc != 0x27D38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D38Cu; }
        if (ctx->pc != 0x27D38Cu) { return; }
    }
    ctx->pc = 0x27D38Cu;
label_27d38c:
    // 0x27d38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d390:
    // 0x27d390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d398: 0x3e00008  jr          $ra
    ctx->pc = 0x27D398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D398u;
            // 0x27d39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D3A0u;
}
