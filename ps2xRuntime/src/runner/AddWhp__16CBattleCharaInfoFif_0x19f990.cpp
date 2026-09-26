#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddWhp__16CBattleCharaInfoFif
// Address: 0x19f990 - 0x19fa08
void AddWhp__16CBattleCharaInfoFif_0x19f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddWhp__16CBattleCharaInfoFif_0x19f990");
#endif

    switch (ctx->pc) {
        case 0x19f9a8u: goto label_19f9a8;
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9ecu: goto label_19f9ec;
        default: break;
    }

    ctx->pc = 0x19f990u;

    // 0x19f990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f998: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f99c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19f99cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19f9a0: 0xc067e24  jal         func_19F890
    ctx->pc = 0x19F9A0u;
    SET_GPR_U32(ctx, 31, 0x19F9A8u);
    ctx->pc = 0x19F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9A0u;
            // 0x19f9a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F890u;
    if (runtime->hasFunction(0x19F890u)) {
        auto targetFn = runtime->lookupFunction(0x19F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9A8u; }
        if (ctx->pc != 0x19F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9A8u; }
        if (ctx->pc != 0x19F9A8u) { return; }
    }
    ctx->pc = 0x19F9A8u;
label_19f9a8:
    // 0x19f9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F9ACu;
    {
        const bool branch_taken_0x19f9ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9ACu;
            // 0x19f9b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9ac) {
            ctx->pc = 0x19F9C0u;
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19F9B4u;
    // 0x19f9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f9b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19F9B8u;
    {
        const bool branch_taken_0x19f9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9B8u;
            // 0x19f9bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9b8) {
            ctx->pc = 0x19F9F8u;
            goto label_19f9f8;
        }
    }
    ctx->pc = 0x19F9C0u;
label_19f9c0:
    // 0x19f9c0: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19F9C0u;
    SET_GPR_U32(ctx, 31, 0x19F9C8u);
    ctx->pc = 0x19F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9C0u;
            // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9C8u; }
        if (ctx->pc != 0x19F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9C8u; }
        if (ctx->pc != 0x19F9C8u) { return; }
    }
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x19f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f9cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f9d0: 0x0  nop
    ctx->pc = 0x19f9d0u;
    // NOP
    // 0x19f9d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x19f9d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f9d8: 0x0  nop
    ctx->pc = 0x19f9d8u;
    // NOP
    // 0x19f9dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F9DCu;
    {
        const bool branch_taken_0x19f9dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9DCu;
            // 0x19f9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9dc) {
            ctx->pc = 0x19F9F4u;
            goto label_19f9f4;
        }
    }
    ctx->pc = 0x19F9E4u;
    // 0x19f9e4: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19F9E4u;
    SET_GPR_U32(ctx, 31, 0x19F9ECu);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9ECu; }
        if (ctx->pc != 0x19F9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9ECu; }
        if (ctx->pc != 0x19F9ECu) { return; }
    }
    ctx->pc = 0x19F9ECu;
label_19f9ec:
    // 0x19f9ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19F9ECu;
    {
        const bool branch_taken_0x19f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9ec) {
            ctx->pc = 0x19F9F4u;
            goto label_19f9f4;
        }
    }
    ctx->pc = 0x19F9F4u;
label_19f9f4:
    // 0x19f9f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f9f8:
    // 0x19f9f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f9fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa00: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA00u;
            // 0x19fa04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA08u;
}
