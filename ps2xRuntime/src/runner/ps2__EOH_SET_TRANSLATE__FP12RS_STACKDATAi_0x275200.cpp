#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_TRANSLATE__FP12RS_STACKDATAi
// Address: 0x275200 - 0x27526c
void ps2__EOH_SET_TRANSLATE__FP12RS_STACKDATAi_0x275200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_TRANSLATE__FP12RS_STACKDATAi_0x275200");
#endif

    switch (ctx->pc) {
        case 0x275214u: goto label_275214;
        case 0x275224u: goto label_275224;
        case 0x275234u: goto label_275234;
        case 0x275240u: goto label_275240;
        case 0x27525cu: goto label_27525c;
        default: break;
    }

    ctx->pc = 0x275200u;

    // 0x275200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27520c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27520Cu;
    SET_GPR_U32(ctx, 31, 0x275214u);
    ctx->pc = 0x275210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27520Cu;
            // 0x275210: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275214u; }
        if (ctx->pc != 0x275214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275214u; }
        if (ctx->pc != 0x275214u) { return; }
    }
    ctx->pc = 0x275214u;
label_275214:
    // 0x275214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27521c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27521Cu;
    SET_GPR_U32(ctx, 31, 0x275224u);
    ctx->pc = 0x275220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27521Cu;
            // 0x275220: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275224u; }
        if (ctx->pc != 0x275224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275224u; }
        if (ctx->pc != 0x275224u) { return; }
    }
    ctx->pc = 0x275224u;
label_275224:
    // 0x275224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275228: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x275228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27522c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27522Cu;
    SET_GPR_U32(ctx, 31, 0x275234u);
    ctx->pc = 0x275230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27522Cu;
            // 0x275230: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275234u; }
        if (ctx->pc != 0x275234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275234u; }
        if (ctx->pc != 0x275234u) { return; }
    }
    ctx->pc = 0x275234u;
label_275234:
    // 0x275234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275238: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275238u;
    SET_GPR_U32(ctx, 31, 0x275240u);
    ctx->pc = 0x27523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275238u;
            // 0x27523c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275240u; }
        if (ctx->pc != 0x275240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275240u; }
        if (ctx->pc != 0x275240u) { return; }
    }
    ctx->pc = 0x275240u;
label_275240:
    // 0x275240: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x275244: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275248: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x275248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27524c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x27524cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x275250: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275254: 0xc097bb4  jal         func_25EED0
    ctx->pc = 0x275254u;
    SET_GPR_U32(ctx, 31, 0x27525Cu);
    ctx->pc = 0x275258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275254u;
            // 0x275258: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EED0u;
    if (runtime->hasFunction(0x25EED0u)) {
        auto targetFn = runtime->lookupFunction(0x25EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27525Cu; }
        if (ctx->pc != 0x27525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTranslate__10CEohMotherFiPf_0x25eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27525Cu; }
        if (ctx->pc != 0x27525Cu) { return; }
    }
    ctx->pc = 0x27525Cu;
label_27525c:
    // 0x27525c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275264: 0x3e00008  jr          $ra
    ctx->pc = 0x275264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275264u;
            // 0x275268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27526Cu;
}
