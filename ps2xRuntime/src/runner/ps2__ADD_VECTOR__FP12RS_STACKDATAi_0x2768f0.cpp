#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_VECTOR__FP12RS_STACKDATAi
// Address: 0x2768f0 - 0x276960
void ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x2768f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x2768f0");
#endif

    switch (ctx->pc) {
        case 0x276908u: goto label_276908;
        case 0x276920u: goto label_276920;
        case 0x276938u: goto label_276938;
        case 0x276950u: goto label_276950;
        default: break;
    }

    ctx->pc = 0x2768f0u;

    // 0x2768f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2768f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2768f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2768f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2768f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2768fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2768fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x276900: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276900u;
    SET_GPR_U32(ctx, 31, 0x276908u);
    ctx->pc = 0x276904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276900u;
            // 0x276904: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276908u; }
        if (ctx->pc != 0x276908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276908u; }
        if (ctx->pc != 0x276908u) { return; }
    }
    ctx->pc = 0x276908u;
label_276908:
    // 0x276908: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x276908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27690c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x27690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276910: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x276910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276914: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276918: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276918u;
    SET_GPR_U32(ctx, 31, 0x276920u);
    ctx->pc = 0x27691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276918u;
            // 0x27691c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276920u; }
        if (ctx->pc != 0x276920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276920u; }
        if (ctx->pc != 0x276920u) { return; }
    }
    ctx->pc = 0x276920u;
label_276920:
    // 0x276920: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x276920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x276924: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x276924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276928: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x276928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x27692c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276930: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276930u;
    SET_GPR_U32(ctx, 31, 0x276938u);
    ctx->pc = 0x276934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276930u;
            // 0x276934: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276938u; }
        if (ctx->pc != 0x276938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276938u; }
        if (ctx->pc != 0x276938u) { return; }
    }
    ctx->pc = 0x276938u;
label_276938:
    // 0x276938: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x276938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x27693c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276940: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x276944: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276948: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276948u;
    SET_GPR_U32(ctx, 31, 0x276950u);
    ctx->pc = 0x27694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276948u;
            // 0x27694c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276950u; }
        if (ctx->pc != 0x276950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276950u; }
        if (ctx->pc != 0x276950u) { return; }
    }
    ctx->pc = 0x276950u;
label_276950:
    // 0x276950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276958: 0x3e00008  jr          $ra
    ctx->pc = 0x276958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276958u;
            // 0x27695c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276960u;
}
