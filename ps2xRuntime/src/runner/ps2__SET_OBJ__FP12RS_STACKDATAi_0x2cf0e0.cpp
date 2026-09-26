#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_OBJ__FP12RS_STACKDATAi
// Address: 0x2cf0e0 - 0x2cf150
void ps2__SET_OBJ__FP12RS_STACKDATAi_0x2cf0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_OBJ__FP12RS_STACKDATAi_0x2cf0e0");
#endif

    switch (ctx->pc) {
        case 0x2cf104u: goto label_2cf104;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf124u: goto label_2cf124;
        case 0x2cf13cu: goto label_2cf13c;
        default: break;
    }

    ctx->pc = 0x2cf0e0u;

    // 0x2cf0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf0ec: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF0ECu;
    {
        const bool branch_taken_0x2cf0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0ECu;
            // 0x2cf0f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0ec) {
            ctx->pc = 0x2CF0FCu;
            goto label_2cf0fc;
        }
    }
    ctx->pc = 0x2CF0F4u;
    // 0x2cf0f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF0F4u;
    {
        const bool branch_taken_0x2cf0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0F4u;
            // 0x2cf0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0f4) {
            ctx->pc = 0x2CF140u;
            goto label_2cf140;
        }
    }
    ctx->pc = 0x2CF0FCu;
label_2cf0fc:
    // 0x2cf0fc: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF0FCu;
    SET_GPR_U32(ctx, 31, 0x2CF104u);
    ctx->pc = 0x2CF100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0FCu;
            // 0x2cf100: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF104u; }
        if (ctx->pc != 0x2CF104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF104u; }
        if (ctx->pc != 0x2CF104u) { return; }
    }
    ctx->pc = 0x2CF104u;
label_2cf104:
    // 0x2cf104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf108: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF108u;
    SET_GPR_U32(ctx, 31, 0x2CF110u);
    ctx->pc = 0x2CF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF108u;
            // 0x2cf10c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF110u; }
        if (ctx->pc != 0x2CF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF110u; }
        if (ctx->pc != 0x2CF110u) { return; }
    }
    ctx->pc = 0x2CF110u;
label_2cf110:
    // 0x2cf110: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf118: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf11c: 0xc05a944  jal         func_16A510
    ctx->pc = 0x2CF11Cu;
    SET_GPR_U32(ctx, 31, 0x2CF124u);
    ctx->pc = 0x2CF120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF11Cu;
            // 0x2cf120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A510u;
    if (runtime->hasFunction(0x16A510u)) {
        auto targetFn = runtime->lookupFunction(0x16A510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF124u; }
        if (ctx->pc != 0x2CF124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryObject__12CActionCharaFPci_0x16a510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF124u; }
        if (ctx->pc != 0x2CF124u) { return; }
    }
    ctx->pc = 0x2CF124u;
label_2cf124:
    // 0x2cf124: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF124u;
    {
        const bool branch_taken_0x2cf124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF124u;
            // 0x2cf128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf124) {
            ctx->pc = 0x2CF140u;
            goto label_2cf140;
        }
    }
    ctx->pc = 0x2CF12Cu;
    // 0x2cf12c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cf130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf134: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CF134u;
    SET_GPR_U32(ctx, 31, 0x2CF13Cu);
    ctx->pc = 0x2CF138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF134u;
            // 0x2cf138: 0x24840278  addiu       $a0, $a0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF13Cu; }
        if (ctx->pc != 0x2CF13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF13Cu; }
        if (ctx->pc != 0x2CF13Cu) { return; }
    }
    ctx->pc = 0x2CF13Cu;
label_2cf13c:
    // 0x2cf13c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf140:
    // 0x2cf140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf148: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF148u;
            // 0x2cf14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF150u;
}
