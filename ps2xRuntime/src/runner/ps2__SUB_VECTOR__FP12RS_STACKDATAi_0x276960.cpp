#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SUB_VECTOR__FP12RS_STACKDATAi
// Address: 0x276960 - 0x2769d0
void ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x276960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x276960");
#endif

    switch (ctx->pc) {
        case 0x276978u: goto label_276978;
        case 0x276990u: goto label_276990;
        case 0x2769a8u: goto label_2769a8;
        case 0x2769c0u: goto label_2769c0;
        default: break;
    }

    ctx->pc = 0x276960u;

    // 0x276960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276964: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x276964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27696c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x276970: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276970u;
    SET_GPR_U32(ctx, 31, 0x276978u);
    ctx->pc = 0x276974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276970u;
            // 0x276974: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276978u; }
        if (ctx->pc != 0x276978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276978u; }
        if (ctx->pc != 0x276978u) { return; }
    }
    ctx->pc = 0x276978u;
label_276978:
    // 0x276978: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x276978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27697c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x27697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276980: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x276980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276984: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276988: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276988u;
    SET_GPR_U32(ctx, 31, 0x276990u);
    ctx->pc = 0x27698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276988u;
            // 0x27698c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276990u; }
        if (ctx->pc != 0x276990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276990u; }
        if (ctx->pc != 0x276990u) { return; }
    }
    ctx->pc = 0x276990u;
label_276990:
    // 0x276990: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x276990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x276994: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x276994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276998: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x276998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x27699c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2769a0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2769A0u;
    SET_GPR_U32(ctx, 31, 0x2769A8u);
    ctx->pc = 0x2769A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2769A0u;
            // 0x2769a4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769A8u; }
        if (ctx->pc != 0x2769A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769A8u; }
        if (ctx->pc != 0x2769A8u) { return; }
    }
    ctx->pc = 0x2769A8u;
label_2769a8:
    // 0x2769a8: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2769ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2769acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2769b0: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2769b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2769b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2769b8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2769B8u;
    SET_GPR_U32(ctx, 31, 0x2769C0u);
    ctx->pc = 0x2769BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2769B8u;
            // 0x2769bc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769C0u; }
        if (ctx->pc != 0x2769C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769C0u; }
        if (ctx->pc != 0x2769C0u) { return; }
    }
    ctx->pc = 0x2769C0u;
label_2769c0:
    // 0x2769c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2769c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2769c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2769c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2769C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2769CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2769C8u;
            // 0x2769cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2769D0u;
}
