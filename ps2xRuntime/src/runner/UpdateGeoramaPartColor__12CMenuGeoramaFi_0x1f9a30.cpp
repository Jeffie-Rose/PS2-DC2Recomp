#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateGeoramaPartColor__12CMenuGeoramaFi
// Address: 0x1f9a30 - 0x1f9ae8
void UpdateGeoramaPartColor__12CMenuGeoramaFi_0x1f9a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateGeoramaPartColor__12CMenuGeoramaFi_0x1f9a30");
#endif

    switch (ctx->pc) {
        case 0x1f9a5cu: goto label_1f9a5c;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9a94u: goto label_1f9a94;
        default: break;
    }

    ctx->pc = 0x1f9a30u;

    // 0x1f9a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9a3c: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1f9a40: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F9A40u;
    {
        const bool branch_taken_0x1f9a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A40u;
            // 0x1f9a44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a40) {
            ctx->pc = 0x1F9AD8u;
            goto label_1f9ad8;
        }
    }
    ctx->pc = 0x1F9A48u;
    // 0x1f9a48: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x1f9a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9a4c: 0x3c0242ff  lui         $v0, 0x42FF
    ctx->pc = 0x1f9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17151 << 16));
    // 0x1f9a50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9a54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F9A54u;
    SET_GPR_U32(ctx, 31, 0x1F9A5Cu);
    ctx->pc = 0x1F9A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A54u;
            // 0x1f9a58: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A5Cu; }
        if (ctx->pc != 0x1F9A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A5Cu; }
        if (ctx->pc != 0x1F9A5Cu) { return; }
    }
    ctx->pc = 0x1F9A5Cu;
label_1f9a5c:
    // 0x1f9a5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f9a60: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1f9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x1f9a64: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x1f9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9a68: 0x3c0242ff  lui         $v0, 0x42FF
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17151 << 16));
    // 0x1f9a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9a70: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F9A70u;
    SET_GPR_U32(ctx, 31, 0x1F9A78u);
    ctx->pc = 0x1F9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A70u;
            // 0x1f9a74: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A78u; }
        if (ctx->pc != 0x1F9A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A78u; }
        if (ctx->pc != 0x1F9A78u) { return; }
    }
    ctx->pc = 0x1F9A78u;
label_1f9a78:
    // 0x1f9a78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f9a7c: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x1f9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x1f9a80: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x1f9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9a84: 0x3c0242ff  lui         $v0, 0x42FF
    ctx->pc = 0x1f9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17151 << 16));
    // 0x1f9a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9a8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F9A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A94u);
    ctx->pc = 0x1F9A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A8Cu;
            // 0x1f9a90: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A94u; }
        if (ctx->pc != 0x1F9A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A94u; }
        if (ctx->pc != 0x1F9A94u) { return; }
    }
    ctx->pc = 0x1F9A94u;
label_1f9a94:
    // 0x1f9a94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f9a98: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x1f9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
    // 0x1f9a9c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9aa0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9aa4: 0x8c23b804  lw          $v1, -0x47FC($at)
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948868)));
    // 0x1f9aa8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9AA8u;
    {
        const bool branch_taken_0x1f9aa8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F9AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AA8u;
            // 0x1f9aac: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9aa8) {
            ctx->pc = 0x1F9AB8u;
            goto label_1f9ab8;
        }
    }
    ctx->pc = 0x1F9AB0u;
    // 0x1f9ab0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9AB0u;
    {
        const bool branch_taken_0x1f9ab0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AB0u;
            // 0x1f9ab4: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ab0) {
            ctx->pc = 0x1F9AC0u;
            goto label_1f9ac0;
        }
    }
    ctx->pc = 0x1F9AB8u;
label_1f9ab8:
    // 0x1f9ab8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f9ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9abc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f9ac0:
    // 0x1f9ac0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f9ac4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f9ac8: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
    // 0x1f9acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9ad0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9ad4: 0xac23d63c  sw          $v1, -0x29C4($at)
    ctx->pc = 0x1f9ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 3));
label_1f9ad8:
    // 0x1f9ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AE0u;
            // 0x1f9ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9AE8u;
}
