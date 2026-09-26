#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSymbol__14CMiniMapSymbolFPfi
// Address: 0x1d4c40 - 0x1d4e90
void DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40");
#endif

    switch (ctx->pc) {
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4e4cu: goto label_1d4e4c;
        default: break;
    }

    ctx->pc = 0x1d4c40u;

    // 0x1d4c40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d4c44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d4c48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d4c4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d4c50: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d4c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d4c58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d4c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d4c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c64: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1d4c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d4c68: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1d4c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d4c6c: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d4c70: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d4c74: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1D4C74u;
    {
        const bool branch_taken_0x1d4c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C74u;
            // 0x1d4c78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c74) {
            ctx->pc = 0x1D4E68u;
            goto label_1d4e68;
        }
    }
    ctx->pc = 0x1D4C7Cu;
    // 0x1d4c7c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4c80: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1D4C80u;
    SET_GPR_U32(ctx, 31, 0x1D4C88u);
    ctx->pc = 0x1D4C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C80u;
            // 0x1d4c84: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C88u; }
        if (ctx->pc != 0x1D4C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C88u; }
        if (ctx->pc != 0x1D4C88u) { return; }
    }
    ctx->pc = 0x1D4C88u;
label_1d4c88:
    // 0x1d4c88: 0xc634013c  lwc1        $f20, 0x13C($s1)
    ctx->pc = 0x1d4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4c8c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1d4c90: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1d4c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4c98: 0x0  nop
    ctx->pc = 0x1d4c98u;
    // NOP
    // 0x1d4c9c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1d4c9cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d4ca0: 0x0  nop
    ctx->pc = 0x1d4ca0u;
    // NOP
    // 0x1d4ca4: 0x0  nop
    ctx->pc = 0x1d4ca4u;
    // NOP
    // 0x1d4ca8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D4CA8u;
    SET_GPR_U32(ctx, 31, 0x1D4CB0u);
    ctx->pc = 0x1D4CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CA8u;
            // 0x1d4cac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CB0u; }
        if (ctx->pc != 0x1D4CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CB0u; }
        if (ctx->pc != 0x1D4CB0u) { return; }
    }
    ctx->pc = 0x1D4CB0u;
label_1d4cb0:
    // 0x1d4cb0: 0xc6350140  lwc1        $f21, 0x140($s1)
    ctx->pc = 0x1d4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4cb4: 0x86260160  lh          $a2, 0x160($s1)
    ctx->pc = 0x1d4cb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1d4cb8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1d4cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4cbc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1d4cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4cc4: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d4cc8: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1d4cc8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x1d4ccc: 0x0  nop
    ctx->pc = 0x1d4cccu;
    // NOP
    // 0x1d4cd0: 0x0  nop
    ctx->pc = 0x1d4cd0u;
    // NOP
    // 0x1d4cd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D4CD4u;
    SET_GPR_U32(ctx, 31, 0x1D4CDCu);
    ctx->pc = 0x1D4CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CD4u;
            // 0x1d4cd8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CDCu; }
        if (ctx->pc != 0x1D4CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CDCu; }
        if (ctx->pc != 0x1D4CDCu) { return; }
    }
    ctx->pc = 0x1D4CDCu;
label_1d4cdc:
    // 0x1d4cdc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4ce0: 0x86260162  lh          $a2, 0x162($s1)
    ctx->pc = 0x1d4ce0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x1d4ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ce8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d4ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4cec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d4cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d4cf0: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d4cf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4cf8: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d4cf8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d4cfc: 0x0  nop
    ctx->pc = 0x1d4cfcu;
    // NOP
    // 0x1d4d00: 0x0  nop
    ctx->pc = 0x1d4d00u;
    // NOP
    // 0x1d4d04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D4D04u;
    SET_GPR_U32(ctx, 31, 0x1D4D0Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D0Cu; }
        if (ctx->pc != 0x1D4D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D0Cu; }
        if (ctx->pc != 0x1D4D0Cu) { return; }
    }
    ctx->pc = 0x1D4D0Cu;
label_1d4d0c:
    // 0x1d4d0c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1d4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4d10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d4d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4d1c: 0x0  nop
    ctx->pc = 0x1d4d1cu;
    // NOP
    // 0x1d4d20: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d4d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d4d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4d28: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x1d4d28u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x1d4d2c: 0x0  nop
    ctx->pc = 0x1d4d2cu;
    // NOP
    // 0x1d4d30: 0x0  nop
    ctx->pc = 0x1d4d30u;
    // NOP
    // 0x1d4d34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D4D34u;
    SET_GPR_U32(ctx, 31, 0x1D4D3Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D3Cu; }
        if (ctx->pc != 0x1D4D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D3Cu; }
        if (ctx->pc != 0x1D4D3Cu) { return; }
    }
    ctx->pc = 0x1D4D3Cu;
label_1d4d3c:
    // 0x1d4d3c: 0x8e270130  lw          $a3, 0x130($s1)
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d4d40: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4D40u;
    {
        const bool branch_taken_0x1d4d40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D40u;
            // 0x1d4d44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d40) {
            ctx->pc = 0x1D4D80u;
            goto label_1d4d80;
        }
    }
    ctx->pc = 0x1D4D48u;
    // 0x1d4d48: 0x86250138  lh          $a1, 0x138($s1)
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1d4d4c: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x1d4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1d4d50: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1d4d54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d4d58: 0x453018  mult        $a2, $v0, $a1
    ctx->pc = 0x1d4d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d4d5c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d4d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d4d60: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d4d64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d4d68: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1d4d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d4d6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4d70: 0x8484000c  lh          $a0, 0xC($a0)
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d4d74: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4D74u;
    {
        const bool branch_taken_0x1d4d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d74) {
            ctx->pc = 0x1D4D80u;
            goto label_1d4d80;
        }
    }
    ctx->pc = 0x1D4D7Cu;
    // 0x1d4d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4d80:
    // 0x1d4d80: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1d4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d4d84: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1d4d88: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1d4d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d4d8c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4D8Cu;
    {
        const bool branch_taken_0x1d4d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D8Cu;
            // 0x1d4d90: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d8c) {
            ctx->pc = 0x1D4D98u;
            goto label_1d4d98;
        }
    }
    ctx->pc = 0x1D4D94u;
    // 0x1d4d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4d98:
    // 0x1d4d98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d4d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4d9c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D4D9Cu;
    {
        const bool branch_taken_0x1d4d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D9Cu;
            // 0x1d4da0: 0x2694d8a0  addiu       $s4, $s4, -0x2760 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d9c) {
            ctx->pc = 0x1D4E58u;
            goto label_1d4e58;
        }
    }
    ctx->pc = 0x1D4DA4u;
label_1d4da4:
    // 0x1d4da4: 0x14b0002b  bne         $a1, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D4DA4u;
    {
        const bool branch_taken_0x1d4da4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d4da4) {
            ctx->pc = 0x1D4E54u;
            goto label_1d4e54;
        }
    }
    ctx->pc = 0x1D4DACu;
    // 0x1d4dac: 0x8684000e  lh          $a0, 0xE($s4)
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1d4db0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4DB0u;
    {
        const bool branch_taken_0x1d4db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4db0) {
            ctx->pc = 0x1D4DC0u;
            goto label_1d4dc0;
        }
    }
    ctx->pc = 0x1D4DB8u;
    // 0x1d4db8: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D4DB8u;
    {
        const bool branch_taken_0x1d4db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4db8) {
            ctx->pc = 0x1D4E64u;
            goto label_1d4e64;
        }
    }
    ctx->pc = 0x1D4DC0u;
label_1d4dc0:
    // 0x1d4dc0: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x1d4dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1d4dc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4DC4u;
    {
        const bool branch_taken_0x1d4dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dc4) {
            ctx->pc = 0x1D4DDCu;
            goto label_1d4ddc;
        }
    }
    ctx->pc = 0x1D4DCCu;
    // 0x1d4dcc: 0x8e230168  lw          $v1, 0x168($s1)
    ctx->pc = 0x1d4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x1d4dd0: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1d4dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4dd4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D4DD4u;
    {
        const bool branch_taken_0x1d4dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dd4) {
            ctx->pc = 0x1D4E64u;
            goto label_1d4e64;
        }
    }
    ctx->pc = 0x1D4DDCu;
label_1d4ddc:
    // 0x1d4ddc: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x1d4ddcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1d4de0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4de4: 0x86860004  lh          $a2, 0x4($s4)
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d4de8: 0x86870006  lh          $a3, 0x6($s4)
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1d4dec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1D4DECu;
    SET_GPR_U32(ctx, 31, 0x1D4DF4u);
    ctx->pc = 0x1D4DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DECu;
            // 0x1d4df0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DF4u; }
        if (ctx->pc != 0x1D4DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DF4u; }
        if (ctx->pc != 0x1D4DF4u) { return; }
    }
    ctx->pc = 0x1D4DF4u;
label_1d4df4:
    // 0x1d4df4: 0x86870008  lh          $a3, 0x8($s4)
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d4df8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d4dfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d4dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1d4e00: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4E00u;
    {
        const bool branch_taken_0x1d4e00 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E00u;
            // 0x1d4e04: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e00) {
            ctx->pc = 0x1D4E10u;
            goto label_1d4e10;
        }
    }
    ctx->pc = 0x1D4E08u;
    // 0x1d4e08: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d4e0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4e10:
    // 0x1d4e10: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x1d4e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1d4e14: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1d4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d4e18: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4e1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4E1Cu;
    {
        const bool branch_taken_0x1d4e1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D4E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E1Cu;
            // 0x1d4e20: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e1c) {
            ctx->pc = 0x1D4E2Cu;
            goto label_1d4e2c;
        }
    }
    ctx->pc = 0x1D4E24u;
    // 0x1d4e24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4e28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4e28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4e2c:
    // 0x1d4e2c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1d4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d4e30: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4e34: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x1d4e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4e38: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1d4e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e3c: 0x240900ba  addiu       $t1, $zero, 0xBA
    ctx->pc = 0x1d4e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1d4e40: 0x240a00f6  addiu       $t2, $zero, 0xF6
    ctx->pc = 0x1d4e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1d4e44: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1D4E44u;
    SET_GPR_U32(ctx, 31, 0x1D4E4Cu);
    ctx->pc = 0x1D4E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E44u;
            // 0x1d4e48: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E4Cu; }
        if (ctx->pc != 0x1D4E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E4Cu; }
        if (ctx->pc != 0x1D4E4Cu) { return; }
    }
    ctx->pc = 0x1D4E4Cu;
label_1d4e4c:
    // 0x1d4e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4E4Cu;
    {
        const bool branch_taken_0x1d4e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e4c) {
            ctx->pc = 0x1D4E64u;
            goto label_1d4e64;
        }
    }
    ctx->pc = 0x1D4E54u;
label_1d4e54:
    // 0x1d4e54: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d4e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d4e58:
    // 0x1d4e58: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x1d4e58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4e5c: 0x14a4ffd1  bne         $a1, $a0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1D4E5Cu;
    {
        const bool branch_taken_0x1d4e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d4e5c) {
            ctx->pc = 0x1D4DA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4da4;
        }
    }
    ctx->pc = 0x1D4E64u;
label_1d4e64:
    // 0x1d4e64: 0x0  nop
    ctx->pc = 0x1d4e64u;
    // NOP
label_1d4e68:
    // 0x1d4e68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d4e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4e6c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1d4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4e70: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d4e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4e74: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1d4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4e78: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d4e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4e7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d4e7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4e80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4e84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d4e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E88u;
            // 0x1d4e8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4E90u;
}
