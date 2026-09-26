#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Load__14CEffectManagerFPci
// Address: 0x183040 - 0x1830bc
void Load__14CEffectManagerFPci_0x183040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load__14CEffectManagerFPci_0x183040");
#endif

    switch (ctx->pc) {
        case 0x183068u: goto label_183068;
        case 0x183084u: goto label_183084;
        case 0x183094u: goto label_183094;
        case 0x18309cu: goto label_18309c;
        default: break;
    }

    ctx->pc = 0x183040u;

    // 0x183040: 0x27bdf0f0  addiu       $sp, $sp, -0xF10
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963440));
    // 0x183044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x183044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18304c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x183050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x183058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18305c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183060: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x183060u;
    SET_GPR_U32(ctx, 31, 0x183068u);
    ctx->pc = 0x183064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183060u;
            // 0x183064: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183068u; }
        if (ctx->pc != 0x183068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183068u; }
        if (ctx->pc != 0x183068u) { return; }
    }
    ctx->pc = 0x183068u;
label_183068:
    // 0x183068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18306c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x18306cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x183070: 0xaf828a60  sw          $v0, -0x75A0($gp)
    ctx->pc = 0x183070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 2));
    // 0x183074: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183078: 0x24a54f30  addiu       $a1, $a1, 0x4F30
    ctx->pc = 0x183078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
    // 0x18307c: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x18307Cu;
    SET_GPR_U32(ctx, 31, 0x183084u);
    ctx->pc = 0x183080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18307Cu;
            // 0x183080: 0xaf928a58  sw          $s2, -0x75A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183084u; }
        if (ctx->pc != 0x183084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183084u; }
        if (ctx->pc != 0x183084u) { return; }
    }
    ctx->pc = 0x183084u;
label_183084:
    // 0x183084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183088: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18308c: 0xc051a60  jal         func_146980
    ctx->pc = 0x18308Cu;
    SET_GPR_U32(ctx, 31, 0x183094u);
    ctx->pc = 0x183090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18308Cu;
            // 0x183090: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183094u; }
        if (ctx->pc != 0x183094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183094u; }
        if (ctx->pc != 0x183094u) { return; }
    }
    ctx->pc = 0x183094u;
label_183094:
    // 0x183094: 0xc0519c8  jal         func_146720
    ctx->pc = 0x183094u;
    SET_GPR_U32(ctx, 31, 0x18309Cu);
    ctx->pc = 0x183098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183094u;
            // 0x183098: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18309Cu; }
        if (ctx->pc != 0x18309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18309Cu; }
        if (ctx->pc != 0x18309Cu) { return; }
    }
    ctx->pc = 0x18309Cu;
label_18309c:
    // 0x18309c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1830a0: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1830a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x1830a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1830a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1830a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1830a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1830ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1830acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1830b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1830b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1830B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1830B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830B4u;
            // 0x1830b8: 0x27bd0f10  addiu       $sp, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1830BCu;
}
