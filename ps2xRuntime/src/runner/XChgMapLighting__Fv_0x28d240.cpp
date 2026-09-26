#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: XChgMapLighting__Fv
// Address: 0x28d240 - 0x28d300
void XChgMapLighting__Fv_0x28d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("XChgMapLighting__Fv_0x28d240");
#endif

    switch (ctx->pc) {
        case 0x28d260u: goto label_28d260;
        case 0x28d290u: goto label_28d290;
        case 0x28d298u: goto label_28d298;
        case 0x28d2acu: goto label_28d2ac;
        case 0x28d2c0u: goto label_28d2c0;
        case 0x28d2d8u: goto label_28d2d8;
        default: break;
    }

    ctx->pc = 0x28d240u;

    // 0x28d240: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x28d244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28d248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d24c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d254: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28d258: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x28D258u;
    SET_GPR_U32(ctx, 31, 0x28D260u);
    ctx->pc = 0x28D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D258u;
            // 0x28d25c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D260u; }
        if (ctx->pc != 0x28D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D260u; }
        if (ctx->pc != 0x28D260u) { return; }
    }
    ctx->pc = 0x28D260u;
label_28d260:
    // 0x28d260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d264: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D264u;
    {
        const bool branch_taken_0x28d264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d264) {
            ctx->pc = 0x28D2E8u;
            goto label_28d2e8;
        }
    }
    ctx->pc = 0x28D26Cu;
    // 0x28d26c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D26Cu;
    {
        const bool branch_taken_0x28d26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d26c) {
            ctx->pc = 0x28D2E8u;
            goto label_28d2e8;
        }
    }
    ctx->pc = 0x28D274u;
    // 0x28d274: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x28d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x28d278: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x28d278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28d27c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28D27Cu;
    {
        const bool branch_taken_0x28d27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D27Cu;
            // 0x28d280: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d27c) {
            ctx->pc = 0x28D2E8u;
            goto label_28d2e8;
        }
    }
    ctx->pc = 0x28D284u;
    // 0x28d284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d288: 0xc049c86  jal         func_127218
    ctx->pc = 0x28D288u;
    SET_GPR_U32(ctx, 31, 0x28D290u);
    ctx->pc = 0x28D28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D288u;
            // 0x28d28c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D290u; }
        if (ctx->pc != 0x28D290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D290u; }
        if (ctx->pc != 0x28D290u) { return; }
    }
    ctx->pc = 0x28D290u;
label_28d290:
    // 0x28d290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d294: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d298:
    // 0x28d298: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x28d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x28d29c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28d2a0: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x28d2a4: 0xc049c18  jal         func_127060
    ctx->pc = 0x28D2A4u;
    SET_GPR_U32(ctx, 31, 0x28D2ACu);
    ctx->pc = 0x28D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2A4u;
            // 0x28d2a8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2ACu; }
        if (ctx->pc != 0x28D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2ACu; }
        if (ctx->pc != 0x28D2ACu) { return; }
    }
    ctx->pc = 0x28D2ACu;
label_28d2ac:
    // 0x28d2ac: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x28d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x28d2b0: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x28d2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x28d2b4: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x28d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28d2b8: 0xc049c18  jal         func_127060
    ctx->pc = 0x28D2B8u;
    SET_GPR_U32(ctx, 31, 0x28D2C0u);
    ctx->pc = 0x28D2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2B8u;
            // 0x28d2bc: 0x24850e80  addiu       $a1, $a0, 0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C0u; }
        if (ctx->pc != 0x28D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C0u; }
        if (ctx->pc != 0x28D2C0u) { return; }
    }
    ctx->pc = 0x28D2C0u;
label_28d2c0:
    // 0x28d2c0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x28d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x28d2c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28d2c8: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x28d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x28d2cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28d2d0: 0xc049c18  jal         func_127060
    ctx->pc = 0x28D2D0u;
    SET_GPR_U32(ctx, 31, 0x28D2D8u);
    ctx->pc = 0x28D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2D0u;
            // 0x28d2d4: 0x24440e80  addiu       $a0, $v0, 0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2D8u; }
        if (ctx->pc != 0x28D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2D8u; }
        if (ctx->pc != 0x28D2D8u) { return; }
    }
    ctx->pc = 0x28D2D8u;
label_28d2d8:
    // 0x28d2d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28d2dc: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x28d2dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28d2e0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28D2E0u;
    {
        const bool branch_taken_0x28d2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2E0u;
            // 0x28d2e4: 0x265201d0  addiu       $s2, $s2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2e0) {
            ctx->pc = 0x28D298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d298;
        }
    }
    ctx->pc = 0x28D2E8u;
label_28d2e8:
    // 0x28d2e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28d2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d2ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2F8u;
            // 0x28d2fc: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D300u;
}
