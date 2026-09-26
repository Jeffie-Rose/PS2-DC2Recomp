#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SePlayFoot__6CSceneFiiPf
// Address: 0x2a80e0 - 0x2a815c
void SePlayFoot__6CSceneFiiPf_0x2a80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePlayFoot__6CSceneFiiPf_0x2a80e0");
#endif

    switch (ctx->pc) {
        case 0x2a8120u: goto label_2a8120;
        case 0x2a8144u: goto label_2a8144;
        default: break;
    }

    ctx->pc = 0x2a80e0u;

    // 0x2a80e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a80e4: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2a80e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a80e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a80ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a80ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a80f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a80f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a80f8: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2a80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2a80fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a80fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a8100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8108: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a810c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a810cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8110: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2a8110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8114: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2a8114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2a8118: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x2A8118u;
    SET_GPR_U32(ctx, 31, 0x2A8120u);
    ctx->pc = 0x2A811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8118u;
            // 0x2a811c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8120u; }
        if (ctx->pc != 0x2A8120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8120u; }
        if (ctx->pc != 0x2A8120u) { return; }
    }
    ctx->pc = 0x2A8120u;
label_2a8120:
    // 0x2a8120: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a8120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8124: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2a8128: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a812c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2a812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a8130: 0x8c24a498  lw          $a0, -0x5B68($at)
    ctx->pc = 0x2a8130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
    // 0x2a8134: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2a8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8138: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2a8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a813c: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x2A813Cu;
    SET_GPR_U32(ctx, 31, 0x2A8144u);
    ctx->pc = 0x2A8140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A813Cu;
            // 0x2a8140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8144u; }
        if (ctx->pc != 0x2A8144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8144u; }
        if (ctx->pc != 0x2A8144u) { return; }
    }
    ctx->pc = 0x2A8144u;
label_2a8144:
    // 0x2a8144: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a8144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a8148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a814c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a814cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8154: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8154u;
            // 0x2a8158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A815Cu;
}
