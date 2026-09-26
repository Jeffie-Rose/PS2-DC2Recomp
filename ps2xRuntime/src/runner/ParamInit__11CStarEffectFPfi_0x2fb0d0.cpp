#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParamInit__11CStarEffectFPfi
// Address: 0x2fb0d0 - 0x2fb268
void ParamInit__11CStarEffectFPfi_0x2fb0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParamInit__11CStarEffectFPfi_0x2fb0d0");
#endif

    switch (ctx->pc) {
        case 0x2fb114u: goto label_2fb114;
        case 0x2fb128u: goto label_2fb128;
        case 0x2fb130u: goto label_2fb130;
        case 0x2fb158u: goto label_2fb158;
        case 0x2fb174u: goto label_2fb174;
        case 0x2fb180u: goto label_2fb180;
        case 0x2fb194u: goto label_2fb194;
        case 0x2fb204u: goto label_2fb204;
        default: break;
    }

    ctx->pc = 0x2fb0d0u;

    // 0x2fb0d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb0d4: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2fb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
    // 0x2fb0d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fb0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fb0dc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2fb0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2fb0e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fb0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2fb0e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fb0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fb0e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fb0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fb0ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fb0ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fb0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fb0f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fb0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fb0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fb0fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fb0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fb104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb108: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2fb108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fb10c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2FB10Cu;
    SET_GPR_U32(ctx, 31, 0x2FB114u);
    ctx->pc = 0x2FB110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB10Cu;
            // 0x2fb110: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB114u; }
        if (ctx->pc != 0x2FB114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB114u; }
        if (ctx->pc != 0x2FB114u) { return; }
    }
    ctx->pc = 0x2FB114u;
label_2fb114:
    // 0x2fb114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb118: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb11c: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x2fb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x2fb120: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FB120u;
    {
        const bool branch_taken_0x2fb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB120u;
            // 0x2fb124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb120) {
            ctx->pc = 0x2FB1E0u;
            goto label_2fb1e0;
        }
    }
    ctx->pc = 0x2FB128u;
label_2fb128:
    // 0x2fb128: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB128u;
    SET_GPR_U32(ctx, 31, 0x2FB130u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB130u; }
        if (ctx->pc != 0x2FB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB130u; }
        if (ctx->pc != 0x2FB130u) { return; }
    }
    ctx->pc = 0x2FB130u;
label_2fb130:
    // 0x2fb130: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fb130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb134: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fb134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fb138: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2fb138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fb13c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2fb13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb140: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2fb140u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2fb144: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fb144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fb148: 0x0  nop
    ctx->pc = 0x2fb148u;
    // NOP
    // 0x2fb14c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x2fb14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2fb150: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB150u;
    SET_GPR_U32(ctx, 31, 0x2FB158u);
    ctx->pc = 0x2FB154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB150u;
            // 0x2fb154: 0x46030502  mul.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB158u; }
        if (ctx->pc != 0x2FB158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB158u; }
        if (ctx->pc != 0x2FB158u) { return; }
    }
    ctx->pc = 0x2FB158u;
label_2fb158:
    // 0x2fb158: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2fb158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2fb15c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2fb15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2fb160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb164: 0x0  nop
    ctx->pc = 0x2fb164u;
    // NOP
    // 0x2fb168: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x2fb168u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fb16c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2FB16Cu;
    SET_GPR_U32(ctx, 31, 0x2FB174u);
    ctx->pc = 0x2FB170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB16Cu;
            // 0x2fb170: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB174u; }
        if (ctx->pc != 0x2FB174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB174u; }
        if (ctx->pc != 0x2FB174u) { return; }
    }
    ctx->pc = 0x2FB174u;
label_2fb174:
    // 0x2fb174: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2fb174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fb178: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB178u;
    SET_GPR_U32(ctx, 31, 0x2FB180u);
    ctx->pc = 0x2FB17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB178u;
            // 0x2fb17c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB180u; }
        if (ctx->pc != 0x2FB180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB180u; }
        if (ctx->pc != 0x2FB180u) { return; }
    }
    ctx->pc = 0x2FB180u;
label_2fb180:
    // 0x2fb180: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2fb180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb184: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2fb184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2fb188: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fb188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fb18c: 0xc047964  jal         func_11E590
    ctx->pc = 0x2FB18Cu;
    SET_GPR_U32(ctx, 31, 0x2FB194u);
    ctx->pc = 0x2FB190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB18Cu;
            // 0x2fb190: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB194u; }
        if (ctx->pc != 0x2FB194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB194u; }
        if (ctx->pc != 0x2FB194u) { return; }
    }
    ctx->pc = 0x2FB194u;
label_2fb194:
    // 0x2fb194: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2fb194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fb198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb19c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2fb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2fb1a0: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2fb1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2fb1a4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fb1a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fb1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fb1ac: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2fb1acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb1b0: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2fb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2fb1b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fb1b8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB1B8u;
    {
        const bool branch_taken_0x2fb1b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2FB1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB1B8u;
            // 0x2fb1bc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1b8) {
            ctx->pc = 0x2FB1CCu;
            goto label_2fb1cc;
        }
    }
    ctx->pc = 0x2FB1C0u;
    // 0x2fb1c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB1C0u;
    {
        const bool branch_taken_0x2fb1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1c0) {
            ctx->pc = 0x2FB1CCu;
            goto label_2fb1cc;
        }
    }
    ctx->pc = 0x2FB1C8u;
    // 0x2fb1c8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2fb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2fb1cc:
    // 0x2fb1cc: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2fb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2fb1d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb1d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fb1d8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2fb1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2fb1dc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2fb1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2fb1e0:
    // 0x2fb1e0: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x2fb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2fb1e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fb1e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fb1e8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2FB1E8u;
    {
        const bool branch_taken_0x2fb1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB1E8u;
            // 0x2fb1ec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1e8) {
            ctx->pc = 0x2FB128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb128;
        }
    }
    ctx->pc = 0x2FB1F0u;
    // 0x2fb1f0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2fb1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2fb1f4: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x2fb1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x2fb1f8: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x2fb1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    // 0x2fb1fc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2FB1FCu;
    SET_GPR_U32(ctx, 31, 0x2FB204u);
    ctx->pc = 0x2FB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB1FCu;
            // 0x2fb200: 0xae820030  sw          $v0, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB204u; }
        if (ctx->pc != 0x2FB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB204u; }
        if (ctx->pc != 0x2FB204u) { return; }
    }
    ctx->pc = 0x2FB204u;
label_2fb204:
    // 0x2fb204: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x2fb204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x2fb208: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb20c: 0xae800074  sw          $zero, 0x74($s4)
    ctx->pc = 0x2fb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 0));
    // 0x2fb210: 0xae800078  sw          $zero, 0x78($s4)
    ctx->pc = 0x2fb210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 0));
    // 0x2fb214: 0xae800088  sw          $zero, 0x88($s4)
    ctx->pc = 0x2fb214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 0));
    // 0x2fb218: 0xae83007c  sw          $v1, 0x7C($s4)
    ctx->pc = 0x2fb218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
    // 0x2fb21c: 0xae800080  sw          $zero, 0x80($s4)
    ctx->pc = 0x2fb21cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 0));
    // 0x2fb220: 0xae920090  sw          $s2, 0x90($s4)
    ctx->pc = 0x2fb220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 18));
    // 0x2fb224: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x2fb224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2fb228: 0x8e84008c  lw          $a0, 0x8C($s4)
    ctx->pc = 0x2fb228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2fb22c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2fb22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fb230: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB230u;
    {
        const bool branch_taken_0x2fb230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB230u;
            // 0x2fb234: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb230) {
            ctx->pc = 0x2FB23Cu;
            goto label_2fb23c;
        }
    }
    ctx->pc = 0x2FB238u;
    // 0x2fb238: 0xae840090  sw          $a0, 0x90($s4)
    ctx->pc = 0x2fb238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 4));
label_2fb23c:
    // 0x2fb23c: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x2fb23cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
    // 0x2fb240: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fb240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb244: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2fb244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fb248: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fb248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb24c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fb24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fb250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb254: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fb254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb258: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fb258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb25c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb260: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB260u;
            // 0x2fb264: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB268u;
}
