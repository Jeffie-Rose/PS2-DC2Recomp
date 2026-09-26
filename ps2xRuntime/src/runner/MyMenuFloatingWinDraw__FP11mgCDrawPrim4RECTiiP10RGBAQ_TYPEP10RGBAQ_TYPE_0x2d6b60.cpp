#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MyMenuFloatingWinDraw__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEP10RGBAQ_TYPE
// Address: 0x2d6b60 - 0x2d7428
void MyMenuFloatingWinDraw__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEP10RGBAQ_TYPE_0x2d6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MyMenuFloatingWinDraw__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEP10RGBAQ_TYPE_0x2d6b60");
#endif

    switch (ctx->pc) {
        case 0x2d6c1cu: goto label_2d6c1c;
        case 0x2d6c34u: goto label_2d6c34;
        case 0x2d6c4cu: goto label_2d6c4c;
        case 0x2d6c68u: goto label_2d6c68;
        case 0x2d6c80u: goto label_2d6c80;
        case 0x2d6c98u: goto label_2d6c98;
        case 0x2d6cb4u: goto label_2d6cb4;
        case 0x2d6cccu: goto label_2d6ccc;
        case 0x2d6ce4u: goto label_2d6ce4;
        case 0x2d6d00u: goto label_2d6d00;
        case 0x2d6d18u: goto label_2d6d18;
        case 0x2d6d30u: goto label_2d6d30;
        case 0x2d6d4cu: goto label_2d6d4c;
        case 0x2d6d64u: goto label_2d6d64;
        case 0x2d6d7cu: goto label_2d6d7c;
        case 0x2d6d98u: goto label_2d6d98;
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6dc8u: goto label_2d6dc8;
        case 0x2d6de4u: goto label_2d6de4;
        case 0x2d6dfcu: goto label_2d6dfc;
        case 0x2d6e14u: goto label_2d6e14;
        case 0x2d6e30u: goto label_2d6e30;
        case 0x2d6e48u: goto label_2d6e48;
        case 0x2d6e60u: goto label_2d6e60;
        case 0x2d6e7cu: goto label_2d6e7c;
        case 0x2d6e94u: goto label_2d6e94;
        case 0x2d6eacu: goto label_2d6eac;
        case 0x2d6ec8u: goto label_2d6ec8;
        case 0x2d6ee0u: goto label_2d6ee0;
        case 0x2d6ef8u: goto label_2d6ef8;
        case 0x2d6f14u: goto label_2d6f14;
        case 0x2d6f2cu: goto label_2d6f2c;
        case 0x2d6f44u: goto label_2d6f44;
        case 0x2d6f60u: goto label_2d6f60;
        case 0x2d6f78u: goto label_2d6f78;
        case 0x2d6f90u: goto label_2d6f90;
        case 0x2d6facu: goto label_2d6fac;
        case 0x2d6fc4u: goto label_2d6fc4;
        case 0x2d6fdcu: goto label_2d6fdc;
        case 0x2d6ff8u: goto label_2d6ff8;
        case 0x2d7010u: goto label_2d7010;
        case 0x2d7028u: goto label_2d7028;
        case 0x2d7044u: goto label_2d7044;
        case 0x2d705cu: goto label_2d705c;
        case 0x2d7074u: goto label_2d7074;
        case 0x2d7090u: goto label_2d7090;
        case 0x2d70a8u: goto label_2d70a8;
        case 0x2d70c0u: goto label_2d70c0;
        case 0x2d70dcu: goto label_2d70dc;
        case 0x2d70f4u: goto label_2d70f4;
        case 0x2d710cu: goto label_2d710c;
        case 0x2d7128u: goto label_2d7128;
        case 0x2d7138u: goto label_2d7138;
        case 0x2d715cu: goto label_2d715c;
        case 0x2d7178u: goto label_2d7178;
        case 0x2d7194u: goto label_2d7194;
        case 0x2d71acu: goto label_2d71ac;
        case 0x2d71c8u: goto label_2d71c8;
        case 0x2d71e4u: goto label_2d71e4;
        case 0x2d7214u: goto label_2d7214;
        case 0x2d7234u: goto label_2d7234;
        case 0x2d7250u: goto label_2d7250;
        case 0x2d7268u: goto label_2d7268;
        case 0x2d7280u: goto label_2d7280;
        case 0x2d729cu: goto label_2d729c;
        case 0x2d72c0u: goto label_2d72c0;
        case 0x2d72dcu: goto label_2d72dc;
        case 0x2d72f8u: goto label_2d72f8;
        case 0x2d7310u: goto label_2d7310;
        case 0x2d7328u: goto label_2d7328;
        case 0x2d7344u: goto label_2d7344;
        case 0x2d7370u: goto label_2d7370;
        case 0x2d7390u: goto label_2d7390;
        case 0x2d73acu: goto label_2d73ac;
        case 0x2d73c4u: goto label_2d73c4;
        case 0x2d73dcu: goto label_2d73dc;
        case 0x2d73f8u: goto label_2d73f8;
        default: break;
    }

    ctx->pc = 0x2d6b60u;

    // 0x2d6b60: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x2d6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x2d6b64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d6b68: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2d6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d6b6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d6b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d6b70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d6b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d6b74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d6b78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d6b7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d6b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d6b80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d6b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d6b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6b88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d6b88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6b90: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d6b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6b98: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d6b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6ba0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2d6ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ba4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bac: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6bb0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d6bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6bb4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6bb8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d6bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6bc0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d6bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d6bc4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6bc8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d6bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d6bcc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2d6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6bd0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2d6bd4: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2d6bd8: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2d6bdc: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2d6be0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2d6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2d6be4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2d6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d6be8: 0x251effee  addiu       $fp, $t0, -0x12
    ctx->pc = 0x2d6be8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967278));
    // 0x2d6bec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2d6becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2d6bf0: 0x24e2fff2  addiu       $v0, $a3, -0xE
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967282));
    // 0x2d6bf4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2d6bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2d6bf8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d6bfc: 0x2457fff9  addiu       $s7, $v0, -0x7
    ctx->pc = 0x2d6bfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x2d6c00: 0x26020009  addiu       $v0, $s0, 0x9
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2d6c04: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2d6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2d6c08: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x2d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x2d6c0c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2d6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2d6c10: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d6c14: 0xc054514  jal         func_151450
    ctx->pc = 0x2D6C14u;
    SET_GPR_U32(ctx, 31, 0x2D6C1Cu);
    ctx->pc = 0x2D6C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C14u;
            // 0x2d6c18: 0x2456fff7  addiu       $s6, $v0, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C1Cu; }
        if (ctx->pc != 0x2D6C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C1Cu; }
        if (ctx->pc != 0x2D6C1Cu) { return; }
    }
    ctx->pc = 0x2D6C1Cu;
label_2d6c1c:
    // 0x2d6c1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d6c20: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2d6c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2d6c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c28: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6c2c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2D6C34u);
    ctx->pc = 0x2D6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C2Cu;
            // 0x2d6c30: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C34u; }
        if (ctx->pc != 0x2D6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C34u; }
        if (ctx->pc != 0x2D6C34u) { return; }
    }
    ctx->pc = 0x2D6C34u;
label_2d6c34:
    // 0x2d6c34: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6c38: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6c3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c40: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6c44: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6C44u;
    SET_GPR_U32(ctx, 31, 0x2D6C4Cu);
    ctx->pc = 0x2D6C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C44u;
            // 0x2d6c48: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C4Cu; }
        if (ctx->pc != 0x2D6C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C4Cu; }
        if (ctx->pc != 0x2D6C4Cu) { return; }
    }
    ctx->pc = 0x2D6C4Cu;
label_2d6c4c:
    // 0x2d6c4c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6c50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c54: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6c58: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d6c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6c5c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d6c60: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6C60u;
    SET_GPR_U32(ctx, 31, 0x2D6C68u);
    ctx->pc = 0x2D6C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C60u;
            // 0x2d6c64: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C68u; }
        if (ctx->pc != 0x2D6C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C68u; }
        if (ctx->pc != 0x2D6C68u) { return; }
    }
    ctx->pc = 0x2D6C68u;
label_2d6c68:
    // 0x2d6c68: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d6c6c: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x2d6c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c74: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d6c78: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6C78u;
    SET_GPR_U32(ctx, 31, 0x2D6C80u);
    ctx->pc = 0x2D6C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C78u;
            // 0x2d6c7c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C80u; }
        if (ctx->pc != 0x2D6C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C80u; }
        if (ctx->pc != 0x2D6C80u) { return; }
    }
    ctx->pc = 0x2D6C80u;
label_2d6c80:
    // 0x2d6c80: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d6c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6c84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d6c88: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d6c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d6c8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c90: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6C90u;
    SET_GPR_U32(ctx, 31, 0x2D6C98u);
    ctx->pc = 0x2D6C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6C90u;
            // 0x2d6c94: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C98u; }
        if (ctx->pc != 0x2D6C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C98u; }
        if (ctx->pc != 0x2D6C98u) { return; }
    }
    ctx->pc = 0x2D6C98u;
label_2d6c98:
    // 0x2d6c98: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6c9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ca0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6ca4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d6ca8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2d6ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d6cac: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6CACu;
    SET_GPR_U32(ctx, 31, 0x2D6CB4u);
    ctx->pc = 0x2D6CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CACu;
            // 0x2d6cb0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CB4u; }
        if (ctx->pc != 0x2D6CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CB4u; }
        if (ctx->pc != 0x2D6CB4u) { return; }
    }
    ctx->pc = 0x2D6CB4u;
label_2d6cb4:
    // 0x2d6cb4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2d6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d6cb8: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x2d6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2d6cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cc0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6cc4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6CC4u;
    SET_GPR_U32(ctx, 31, 0x2D6CCCu);
    ctx->pc = 0x2D6CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CC4u;
            // 0x2d6cc8: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CCCu; }
        if (ctx->pc != 0x2D6CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CCCu; }
        if (ctx->pc != 0x2D6CCCu) { return; }
    }
    ctx->pc = 0x2D6CCCu;
label_2d6ccc:
    // 0x2d6ccc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d6cd0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cd8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6cdc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6CDCu;
    SET_GPR_U32(ctx, 31, 0x2D6CE4u);
    ctx->pc = 0x2D6CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CDCu;
            // 0x2d6ce0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CE4u; }
        if (ctx->pc != 0x2D6CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6CE4u; }
        if (ctx->pc != 0x2D6CE4u) { return; }
    }
    ctx->pc = 0x2D6CE4u;
label_2d6ce4:
    // 0x2d6ce4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6ce8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cec: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6cf0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d6cf4: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2d6cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d6cf8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6CF8u;
    SET_GPR_U32(ctx, 31, 0x2D6D00u);
    ctx->pc = 0x2D6CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6CF8u;
            // 0x2d6cfc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D00u; }
        if (ctx->pc != 0x2D6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D00u; }
        if (ctx->pc != 0x2D6D00u) { return; }
    }
    ctx->pc = 0x2D6D00u;
label_2d6d00:
    // 0x2d6d00: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d6d04: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2d6d08: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d6d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6d0c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6d10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6D10u;
    SET_GPR_U32(ctx, 31, 0x2D6D18u);
    ctx->pc = 0x2D6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D10u;
            // 0x2d6d14: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D18u; }
        if (ctx->pc != 0x2D6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D18u; }
        if (ctx->pc != 0x2D6D18u) { return; }
    }
    ctx->pc = 0x2D6D18u;
label_2d6d18:
    // 0x2d6d18: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6d1c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6d20: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d6d24: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6d28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6D28u;
    SET_GPR_U32(ctx, 31, 0x2D6D30u);
    ctx->pc = 0x2D6D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D28u;
            // 0x2d6d2c: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D30u; }
        if (ctx->pc != 0x2D6D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D30u; }
        if (ctx->pc != 0x2D6D30u) { return; }
    }
    ctx->pc = 0x2D6D30u;
label_2d6d30:
    // 0x2d6d30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6d34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d38: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6d3c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2d6d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6d40: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2d6d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d6d44: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6D44u;
    SET_GPR_U32(ctx, 31, 0x2D6D4Cu);
    ctx->pc = 0x2D6D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D44u;
            // 0x2d6d48: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D4Cu; }
        if (ctx->pc != 0x2D6D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D4Cu; }
        if (ctx->pc != 0x2D6D4Cu) { return; }
    }
    ctx->pc = 0x2D6D4Cu;
label_2d6d4c:
    // 0x2d6d4c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d6d50: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x2d6d54: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6d58: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d6d5c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D64u);
    ctx->pc = 0x2D6D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D5Cu;
            // 0x2d6d60: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D64u; }
        if (ctx->pc != 0x2D6D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D64u; }
        if (ctx->pc != 0x2D6D64u) { return; }
    }
    ctx->pc = 0x2D6D64u;
label_2d6d64:
    // 0x2d6d64: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6d68: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d6d6c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d6d70: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d6d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d6d74: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6D74u;
    SET_GPR_U32(ctx, 31, 0x2D6D7Cu);
    ctx->pc = 0x2D6D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D74u;
            // 0x2d6d78: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D7Cu; }
        if (ctx->pc != 0x2D6D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D7Cu; }
        if (ctx->pc != 0x2D6D7Cu) { return; }
    }
    ctx->pc = 0x2D6D7Cu;
label_2d6d7c:
    // 0x2d6d7c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6d80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d84: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6d88: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2d6d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d6d8c: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2d6d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d6d90: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6D90u;
    SET_GPR_U32(ctx, 31, 0x2D6D98u);
    ctx->pc = 0x2D6D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6D90u;
            // 0x2d6d94: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D98u; }
        if (ctx->pc != 0x2D6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D98u; }
        if (ctx->pc != 0x2D6D98u) { return; }
    }
    ctx->pc = 0x2D6D98u;
label_2d6d98:
    // 0x2d6d98: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2d6d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d6d9c: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x2d6d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2d6da0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6da4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6da8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6DA8u;
    SET_GPR_U32(ctx, 31, 0x2D6DB0u);
    ctx->pc = 0x2D6DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DA8u;
            // 0x2d6dac: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DB0u; }
        if (ctx->pc != 0x2D6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DB0u; }
        if (ctx->pc != 0x2D6DB0u) { return; }
    }
    ctx->pc = 0x2D6DB0u;
label_2d6db0:
    // 0x2d6db0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d6db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d6db4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d6db8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dbc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6dc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6DC0u;
    SET_GPR_U32(ctx, 31, 0x2D6DC8u);
    ctx->pc = 0x2D6DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DC0u;
            // 0x2d6dc4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DC8u; }
        if (ctx->pc != 0x2D6DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DC8u; }
        if (ctx->pc != 0x2D6DC8u) { return; }
    }
    ctx->pc = 0x2D6DC8u;
label_2d6dc8:
    // 0x2d6dc8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6dcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dd0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6dd4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2d6dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d6dd8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2d6dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d6ddc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6DDCu;
    SET_GPR_U32(ctx, 31, 0x2D6DE4u);
    ctx->pc = 0x2D6DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DDCu;
            // 0x2d6de0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DE4u; }
        if (ctx->pc != 0x2D6DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DE4u; }
        if (ctx->pc != 0x2D6DE4u) { return; }
    }
    ctx->pc = 0x2D6DE4u;
label_2d6de4:
    // 0x2d6de4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d6de8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2d6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2d6dec: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d6decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d6df0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6df4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6DF4u;
    SET_GPR_U32(ctx, 31, 0x2D6DFCu);
    ctx->pc = 0x2D6DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6DF4u;
            // 0x2d6df8: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DFCu; }
        if (ctx->pc != 0x2D6DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DFCu; }
        if (ctx->pc != 0x2D6DFCu) { return; }
    }
    ctx->pc = 0x2D6DFCu;
label_2d6dfc:
    // 0x2d6dfc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6e00: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2d6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d6e04: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d6e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e08: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6e0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E14u);
    ctx->pc = 0x2D6E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E0Cu;
            // 0x2d6e10: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E14u; }
        if (ctx->pc != 0x2D6E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E14u; }
        if (ctx->pc != 0x2D6E14u) { return; }
    }
    ctx->pc = 0x2D6E14u;
label_2d6e14:
    // 0x2d6e14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6e18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e1c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6e20: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2d6e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d6e24: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x2d6e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d6e28: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6E28u;
    SET_GPR_U32(ctx, 31, 0x2D6E30u);
    ctx->pc = 0x2D6E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E28u;
            // 0x2d6e2c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E30u; }
        if (ctx->pc != 0x2D6E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E30u; }
        if (ctx->pc != 0x2D6E30u) { return; }
    }
    ctx->pc = 0x2D6E30u;
label_2d6e30:
    // 0x2d6e30: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d6e34: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x2d6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x2d6e38: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d6e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d6e3c: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d6e40: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6E40u;
    SET_GPR_U32(ctx, 31, 0x2D6E48u);
    ctx->pc = 0x2D6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E40u;
            // 0x2d6e44: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E48u; }
        if (ctx->pc != 0x2D6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E48u; }
        if (ctx->pc != 0x2D6E48u) { return; }
    }
    ctx->pc = 0x2D6E48u;
label_2d6e48:
    // 0x2d6e48: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6e4c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2d6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d6e50: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d6e54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d6e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e58: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6E58u;
    SET_GPR_U32(ctx, 31, 0x2D6E60u);
    ctx->pc = 0x2D6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E58u;
            // 0x2d6e5c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E60u; }
        if (ctx->pc != 0x2D6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E60u; }
        if (ctx->pc != 0x2D6E60u) { return; }
    }
    ctx->pc = 0x2D6E60u;
label_2d6e60:
    // 0x2d6e60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6e64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e68: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6e6c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2d6e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d6e70: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x2d6e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d6e74: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6E74u;
    SET_GPR_U32(ctx, 31, 0x2D6E7Cu);
    ctx->pc = 0x2D6E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E74u;
            // 0x2d6e78: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E7Cu; }
        if (ctx->pc != 0x2D6E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E7Cu; }
        if (ctx->pc != 0x2D6E7Cu) { return; }
    }
    ctx->pc = 0x2D6E7Cu;
label_2d6e7c:
    // 0x2d6e7c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d6e80: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x2d6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2d6e84: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d6e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d6e88: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6e8c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E94u);
    ctx->pc = 0x2D6E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6E8Cu;
            // 0x2d6e90: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E94u; }
        if (ctx->pc != 0x2D6E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E94u; }
        if (ctx->pc != 0x2D6E94u) { return; }
    }
    ctx->pc = 0x2D6E94u;
label_2d6e94:
    // 0x2d6e94: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2d6e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d6e98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d6e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ea0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6ea4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6EA4u;
    SET_GPR_U32(ctx, 31, 0x2D6EACu);
    ctx->pc = 0x2D6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6EA4u;
            // 0x2d6ea8: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EACu; }
        if (ctx->pc != 0x2D6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EACu; }
        if (ctx->pc != 0x2D6EACu) { return; }
    }
    ctx->pc = 0x2D6EACu;
label_2d6eac:
    // 0x2d6eac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6eb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6eb4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6eb8: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d6ebc: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x2d6ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d6ec0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6EC0u;
    SET_GPR_U32(ctx, 31, 0x2D6EC8u);
    ctx->pc = 0x2D6EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6EC0u;
            // 0x2d6ec4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EC8u; }
        if (ctx->pc != 0x2D6EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EC8u; }
        if (ctx->pc != 0x2D6EC8u) { return; }
    }
    ctx->pc = 0x2D6EC8u;
label_2d6ec8:
    // 0x2d6ec8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d6ecc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2d6eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d6ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ed4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6ed8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6ED8u;
    SET_GPR_U32(ctx, 31, 0x2D6EE0u);
    ctx->pc = 0x2D6EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6ED8u;
            // 0x2d6edc: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EE0u; }
        if (ctx->pc != 0x2D6EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EE0u; }
        if (ctx->pc != 0x2D6EE0u) { return; }
    }
    ctx->pc = 0x2D6EE0u;
label_2d6ee0:
    // 0x2d6ee0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d6ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6ee4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2d6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d6ee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6eec: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6ef0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6EF0u;
    SET_GPR_U32(ctx, 31, 0x2D6EF8u);
    ctx->pc = 0x2D6EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6EF0u;
            // 0x2d6ef4: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EF8u; }
        if (ctx->pc != 0x2D6EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EF8u; }
        if (ctx->pc != 0x2D6EF8u) { return; }
    }
    ctx->pc = 0x2D6EF8u;
label_2d6ef8:
    // 0x2d6ef8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6efc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f00: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6f04: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d6f08: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x2d6f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d6f0c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F14u);
    ctx->pc = 0x2D6F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F0Cu;
            // 0x2d6f10: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F14u; }
        if (ctx->pc != 0x2D6F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F14u; }
        if (ctx->pc != 0x2D6F14u) { return; }
    }
    ctx->pc = 0x2D6F14u;
label_2d6f14:
    // 0x2d6f14: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2d6f18: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2d6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2d6f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f20: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2d6f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d6f24: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6F24u;
    SET_GPR_U32(ctx, 31, 0x2D6F2Cu);
    ctx->pc = 0x2D6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F24u;
            // 0x2d6f28: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F2Cu; }
        if (ctx->pc != 0x2D6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F2Cu; }
        if (ctx->pc != 0x2D6F2Cu) { return; }
    }
    ctx->pc = 0x2D6F2Cu;
label_2d6f2c:
    // 0x2d6f2c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d6f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6f30: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2d6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d6f34: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d6f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d6f38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f3c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6F3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F44u);
    ctx->pc = 0x2D6F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F3Cu;
            // 0x2d6f40: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F44u; }
        if (ctx->pc != 0x2D6F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F44u; }
        if (ctx->pc != 0x2D6F44u) { return; }
    }
    ctx->pc = 0x2D6F44u;
label_2d6f44:
    // 0x2d6f44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6f48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f4c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6f50: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d6f54: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x2d6f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2d6f58: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6F58u;
    SET_GPR_U32(ctx, 31, 0x2D6F60u);
    ctx->pc = 0x2D6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F58u;
            // 0x2d6f5c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F60u; }
        if (ctx->pc != 0x2D6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F60u; }
        if (ctx->pc != 0x2D6F60u) { return; }
    }
    ctx->pc = 0x2D6F60u;
label_2d6f60:
    // 0x2d6f60: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2d6f64: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2d6f68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f6c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6f70: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6F70u;
    SET_GPR_U32(ctx, 31, 0x2D6F78u);
    ctx->pc = 0x2D6F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F70u;
            // 0x2d6f74: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F78u; }
        if (ctx->pc != 0x2D6F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F78u; }
        if (ctx->pc != 0x2D6F78u) { return; }
    }
    ctx->pc = 0x2D6F78u;
label_2d6f78:
    // 0x2d6f78: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2d6f7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f84: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6f88: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6F88u;
    SET_GPR_U32(ctx, 31, 0x2D6F90u);
    ctx->pc = 0x2D6F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6F88u;
            // 0x2d6f8c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F90u; }
        if (ctx->pc != 0x2D6F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F90u; }
        if (ctx->pc != 0x2D6F90u) { return; }
    }
    ctx->pc = 0x2D6F90u;
label_2d6f90:
    // 0x2d6f90: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6f94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f98: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6f9c: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2d6fa0: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x2d6fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2d6fa4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6FA4u;
    SET_GPR_U32(ctx, 31, 0x2D6FACu);
    ctx->pc = 0x2D6FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FA4u;
            // 0x2d6fa8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FACu; }
        if (ctx->pc != 0x2D6FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FACu; }
        if (ctx->pc != 0x2D6FACu) { return; }
    }
    ctx->pc = 0x2D6FACu;
label_2d6fac:
    // 0x2d6fac: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2d6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2d6fb0: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2d6fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d6fb4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d6fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6fb8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6fbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6FBCu;
    SET_GPR_U32(ctx, 31, 0x2D6FC4u);
    ctx->pc = 0x2D6FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FBCu;
            // 0x2d6fc0: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FC4u; }
        if (ctx->pc != 0x2D6FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FC4u; }
        if (ctx->pc != 0x2D6FC4u) { return; }
    }
    ctx->pc = 0x2D6FC4u;
label_2d6fc4:
    // 0x2d6fc4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6fc8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2d6fcc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d6fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d6fd0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d6fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6fd4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6FD4u;
    SET_GPR_U32(ctx, 31, 0x2D6FDCu);
    ctx->pc = 0x2D6FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FD4u;
            // 0x2d6fd8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FDCu; }
        if (ctx->pc != 0x2D6FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FDCu; }
        if (ctx->pc != 0x2D6FDCu) { return; }
    }
    ctx->pc = 0x2D6FDCu;
label_2d6fdc:
    // 0x2d6fdc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6fe0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fe4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6fe8: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x2d6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2d6fec: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2d6fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2d6ff0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6FF0u;
    SET_GPR_U32(ctx, 31, 0x2D6FF8u);
    ctx->pc = 0x2D6FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6FF0u;
            // 0x2d6ff4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FF8u; }
        if (ctx->pc != 0x2D6FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FF8u; }
        if (ctx->pc != 0x2D6FF8u) { return; }
    }
    ctx->pc = 0x2D6FF8u;
label_2d6ff8:
    // 0x2d6ff8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2d6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2d6ffc: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2d6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2d7000: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d7000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d7004: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d7004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d7008: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7008u;
    SET_GPR_U32(ctx, 31, 0x2D7010u);
    ctx->pc = 0x2D700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7008u;
            // 0x2d700c: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7010u; }
        if (ctx->pc != 0x2D7010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7010u; }
        if (ctx->pc != 0x2D7010u) { return; }
    }
    ctx->pc = 0x2D7010u;
label_2d7010:
    // 0x2d7010: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d7010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7014: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2d7014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7018: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2d7018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2d701c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d701cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7020: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7020u;
    SET_GPR_U32(ctx, 31, 0x2D7028u);
    ctx->pc = 0x2D7024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7020u;
            // 0x2d7024: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7028u; }
        if (ctx->pc != 0x2D7028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7028u; }
        if (ctx->pc != 0x2D7028u) { return; }
    }
    ctx->pc = 0x2D7028u;
label_2d7028:
    // 0x2d7028: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d702c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d702cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7030: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7034: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x2d7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2d7038: 0x27a702b0  addiu       $a3, $sp, 0x2B0
    ctx->pc = 0x2d7038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2d703c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D703Cu;
    SET_GPR_U32(ctx, 31, 0x2D7044u);
    ctx->pc = 0x2D7040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D703Cu;
            // 0x2d7040: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7044u; }
        if (ctx->pc != 0x2D7044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7044u; }
        if (ctx->pc != 0x2D7044u) { return; }
    }
    ctx->pc = 0x2D7044u;
label_2d7044:
    // 0x2d7044: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x2d7044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2d7048: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2d7048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d704c: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d7050: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d7050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d7054: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7054u;
    SET_GPR_U32(ctx, 31, 0x2D705Cu);
    ctx->pc = 0x2D7058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7054u;
            // 0x2d7058: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D705Cu; }
        if (ctx->pc != 0x2D705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D705Cu; }
        if (ctx->pc != 0x2D705Cu) { return; }
    }
    ctx->pc = 0x2D705Cu;
label_2d705c:
    // 0x2d705c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d7060: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2d7060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x2d7064: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d7064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7068: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d7068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d706c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D706Cu;
    SET_GPR_U32(ctx, 31, 0x2D7074u);
    ctx->pc = 0x2D7070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D706Cu;
            // 0x2d7070: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7074u; }
        if (ctx->pc != 0x2D7074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7074u; }
        if (ctx->pc != 0x2D7074u) { return; }
    }
    ctx->pc = 0x2D7074u;
label_2d7074:
    // 0x2d7074: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7078: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d707c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7080: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x2d7080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x2d7084: 0x27a702d0  addiu       $a3, $sp, 0x2D0
    ctx->pc = 0x2d7084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2d7088: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7088u;
    SET_GPR_U32(ctx, 31, 0x2D7090u);
    ctx->pc = 0x2D708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7088u;
            // 0x2d708c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7090u; }
        if (ctx->pc != 0x2D7090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7090u; }
        if (ctx->pc != 0x2D7090u) { return; }
    }
    ctx->pc = 0x2D7090u;
label_2d7090:
    // 0x2d7090: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x2d7090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x2d7094: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2d7094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2d7098: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d7098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d709c: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2d709cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d70a0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D70A0u;
    SET_GPR_U32(ctx, 31, 0x2D70A8u);
    ctx->pc = 0x2D70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70A0u;
            // 0x2d70a4: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70A8u; }
        if (ctx->pc != 0x2D70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70A8u; }
        if (ctx->pc != 0x2D70A8u) { return; }
    }
    ctx->pc = 0x2D70A8u;
label_2d70a8:
    // 0x2d70a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d70ac: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x2d70acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x2d70b0: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d70b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d70b4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d70b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D70B8u;
    SET_GPR_U32(ctx, 31, 0x2D70C0u);
    ctx->pc = 0x2D70BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70B8u;
            // 0x2d70bc: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70C0u; }
        if (ctx->pc != 0x2D70C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70C0u; }
        if (ctx->pc != 0x2D70C0u) { return; }
    }
    ctx->pc = 0x2D70C0u;
label_2d70c0:
    // 0x2d70c0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d70c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d70c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70c8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d70cc: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x2d70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x2d70d0: 0x27a702f0  addiu       $a3, $sp, 0x2F0
    ctx->pc = 0x2d70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x2d70d4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D70D4u;
    SET_GPR_U32(ctx, 31, 0x2D70DCu);
    ctx->pc = 0x2D70D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70D4u;
            // 0x2d70d8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70DCu; }
        if (ctx->pc != 0x2D70DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70DCu; }
        if (ctx->pc != 0x2D70DCu) { return; }
    }
    ctx->pc = 0x2D70DCu;
label_2d70dc:
    // 0x2d70dc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x2d70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2d70e0: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2d70e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2d70e4: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2d70e8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d70e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d70ec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D70ECu;
    SET_GPR_U32(ctx, 31, 0x2D70F4u);
    ctx->pc = 0x2D70F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D70ECu;
            // 0x2d70f0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70F4u; }
        if (ctx->pc != 0x2D70F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70F4u; }
        if (ctx->pc != 0x2D70F4u) { return; }
    }
    ctx->pc = 0x2D70F4u;
label_2d70f4:
    // 0x2d70f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d70f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d70f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70fc: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x2d70fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x2d7100: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2d7100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d7104: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7104u;
    SET_GPR_U32(ctx, 31, 0x2D710Cu);
    ctx->pc = 0x2D7108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7104u;
            // 0x2d7108: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D710Cu; }
        if (ctx->pc != 0x2D710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D710Cu; }
        if (ctx->pc != 0x2D710Cu) { return; }
    }
    ctx->pc = 0x2D710Cu;
label_2d710c:
    // 0x2d710c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d710cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7110: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7114: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7118: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x2d7118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x2d711c: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x2d711cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2d7120: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7120u;
    SET_GPR_U32(ctx, 31, 0x2D7128u);
    ctx->pc = 0x2D7124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7120u;
            // 0x2d7124: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7128u; }
        if (ctx->pc != 0x2D7128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7128u; }
        if (ctx->pc != 0x2D7128u) { return; }
    }
    ctx->pc = 0x2D7128u;
label_2d7128:
    // 0x2d7128: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d7128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d712c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d7130: 0xc054514  jal         func_151450
    ctx->pc = 0x2D7130u;
    SET_GPR_U32(ctx, 31, 0x2D7138u);
    ctx->pc = 0x2D7134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7130u;
            // 0x2d7134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7138u; }
        if (ctx->pc != 0x2D7138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7138u; }
        if (ctx->pc != 0x2D7138u) { return; }
    }
    ctx->pc = 0x2D7138u;
label_2d7138:
    // 0x2d7138: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2d7138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d713c: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x2d713cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d7140: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7140u;
    {
        const bool branch_taken_0x2d7140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7140u;
            // 0x2d7144: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7140) {
            ctx->pc = 0x2D71ECu;
            goto label_2d71ec;
        }
    }
    ctx->pc = 0x2D7148u;
    // 0x2d7148: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x2d7148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x2d714c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x2d714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2d7150: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x2d7150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2d7154: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7154u;
    SET_GPR_U32(ctx, 31, 0x2D715Cu);
    ctx->pc = 0x2D7158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7154u;
            // 0x2d7158: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D715Cu; }
        if (ctx->pc != 0x2D715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D715Cu; }
        if (ctx->pc != 0x2D715Cu) { return; }
    }
    ctx->pc = 0x2D715Cu;
label_2d715c:
    // 0x2d715c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d7160: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7164: 0x2666fff6  addiu       $a2, $s3, -0xA
    ctx->pc = 0x2d7164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x2d7168: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2d7168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2d716c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d716cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7170: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7170u;
    SET_GPR_U32(ctx, 31, 0x2D7178u);
    ctx->pc = 0x2D7174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7170u;
            // 0x2d7174: 0x2445fff3  addiu       $a1, $v0, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7178u; }
        if (ctx->pc != 0x2D7178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7178u; }
        if (ctx->pc != 0x2D7178u) { return; }
    }
    ctx->pc = 0x2D7178u;
label_2d7178:
    // 0x2d7178: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d717c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d717cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7180: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7184: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7188: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x2d7188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2d718c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D718Cu;
    SET_GPR_U32(ctx, 31, 0x2D7194u);
    ctx->pc = 0x2D7190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D718Cu;
            // 0x2d7190: 0x27a70330  addiu       $a3, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7194u; }
        if (ctx->pc != 0x2D7194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7194u; }
        if (ctx->pc != 0x2D7194u) { return; }
    }
    ctx->pc = 0x2D7194u;
label_2d7194:
    // 0x2d7194: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7198: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2d7198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x2d719c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2d71a0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d71a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d71a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D71A4u;
    SET_GPR_U32(ctx, 31, 0x2D71ACu);
    ctx->pc = 0x2D71A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D71A4u;
            // 0x2d71a8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71ACu; }
        if (ctx->pc != 0x2D71ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71ACu; }
        if (ctx->pc != 0x2D71ACu) { return; }
    }
    ctx->pc = 0x2D71ACu;
label_2d71ac:
    // 0x2d71ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d71acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d71b0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d71b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d71b4: 0x2666fff6  addiu       $a2, $s3, -0xA
    ctx->pc = 0x2d71b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x2d71b8: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x2d71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2d71bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d71bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D71C0u;
    SET_GPR_U32(ctx, 31, 0x2D71C8u);
    ctx->pc = 0x2D71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D71C0u;
            // 0x2d71c4: 0x2445fff3  addiu       $a1, $v0, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71C8u; }
        if (ctx->pc != 0x2D71C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71C8u; }
        if (ctx->pc != 0x2D71C8u) { return; }
    }
    ctx->pc = 0x2D71C8u;
label_2d71c8:
    // 0x2d71c8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d71cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d71ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d71d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71d4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d71d8: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x2d71d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2d71dc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D71DCu;
    SET_GPR_U32(ctx, 31, 0x2D71E4u);
    ctx->pc = 0x2D71E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D71DCu;
            // 0x2d71e0: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71E4u; }
        if (ctx->pc != 0x2D71E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D71E4u; }
        if (ctx->pc != 0x2D71E4u) { return; }
    }
    ctx->pc = 0x2D71E4u;
label_2d71e4:
    // 0x2d71e4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2D71E4u;
    {
        const bool branch_taken_0x2d71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D71E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D71E4u;
            // 0x2d71e8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71e4) {
            ctx->pc = 0x2D73FCu;
            goto label_2d73fc;
        }
    }
    ctx->pc = 0x2D71ECu;
label_2d71ec:
    // 0x2d71ec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2d71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d71f0: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x2d71f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2d71f4: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D71F4u;
    {
        const bool branch_taken_0x2d71f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D71F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D71F4u;
            // 0x2d71f8: 0x270082a  slt         $at, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71f4) {
            ctx->pc = 0x2D72A4u;
            goto label_2d72a4;
        }
    }
    ctx->pc = 0x2D71FCu;
    // 0x2d71fc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d71fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7200: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2d7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2d7204: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x2d7204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x2d7208: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x2d7208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2d720c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D720Cu;
    SET_GPR_U32(ctx, 31, 0x2D7214u);
    ctx->pc = 0x2D7210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D720Cu;
            // 0x2d7210: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7214u; }
        if (ctx->pc != 0x2D7214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7214u; }
        if (ctx->pc != 0x2D7214u) { return; }
    }
    ctx->pc = 0x2D7214u;
label_2d7214:
    // 0x2d7214: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d7214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d7218: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d721c: 0x2666fff6  addiu       $a2, $s3, -0xA
    ctx->pc = 0x2d721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x2d7220: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2d7220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2d7224: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d7224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7228: 0x2450fff8  addiu       $s0, $v0, -0x8
    ctx->pc = 0x2d7228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d722c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D722Cu;
    SET_GPR_U32(ctx, 31, 0x2D7234u);
    ctx->pc = 0x2D7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D722Cu;
            // 0x2d7230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7234u; }
        if (ctx->pc != 0x2D7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7234u; }
        if (ctx->pc != 0x2D7234u) { return; }
    }
    ctx->pc = 0x2D7234u;
label_2d7234:
    // 0x2d7234: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7238: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d7238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d723c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7240: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7244: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x2d7244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2d7248: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7248u;
    SET_GPR_U32(ctx, 31, 0x2D7250u);
    ctx->pc = 0x2D724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7248u;
            // 0x2d724c: 0x27a70370  addiu       $a3, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7250u; }
        if (ctx->pc != 0x2D7250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7250u; }
        if (ctx->pc != 0x2D7250u) { return; }
    }
    ctx->pc = 0x2D7250u;
label_2d7250:
    // 0x2d7250: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7254: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x2d7254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2d7258: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x2d7258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x2d725c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d7260: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7260u;
    SET_GPR_U32(ctx, 31, 0x2D7268u);
    ctx->pc = 0x2D7264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7260u;
            // 0x2d7264: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7268u; }
        if (ctx->pc != 0x2D7268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7268u; }
        if (ctx->pc != 0x2D7268u) { return; }
    }
    ctx->pc = 0x2D7268u;
label_2d7268:
    // 0x2d7268: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d726c: 0x2666fff6  addiu       $a2, $s3, -0xA
    ctx->pc = 0x2d726cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x2d7270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7274: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2d7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2d7278: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7278u;
    SET_GPR_U32(ctx, 31, 0x2D7280u);
    ctx->pc = 0x2D727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7278u;
            // 0x2d727c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7280u; }
        if (ctx->pc != 0x2D7280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7280u; }
        if (ctx->pc != 0x2D7280u) { return; }
    }
    ctx->pc = 0x2D7280u;
label_2d7280:
    // 0x2d7280: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7284: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7288: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d7288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d728c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7290: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x2d7290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2d7294: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7294u;
    SET_GPR_U32(ctx, 31, 0x2D729Cu);
    ctx->pc = 0x2D7298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7294u;
            // 0x2d7298: 0x27a70390  addiu       $a3, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D729Cu; }
        if (ctx->pc != 0x2D729Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D729Cu; }
        if (ctx->pc != 0x2D729Cu) { return; }
    }
    ctx->pc = 0x2D729Cu;
label_2d729c:
    // 0x2d729c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2D729Cu;
    {
        const bool branch_taken_0x2d729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d729c) {
            ctx->pc = 0x2D73F8u;
            goto label_2d73f8;
        }
    }
    ctx->pc = 0x2D72A4u;
label_2d72a4:
    // 0x2d72a4: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D72A4u;
    {
        const bool branch_taken_0x2d72a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D72A4u;
            // 0x2d72a8: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72a4) {
            ctx->pc = 0x2D734Cu;
            goto label_2d734c;
        }
    }
    ctx->pc = 0x2D72ACu;
    // 0x2d72ac: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2d72acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2d72b0: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x2d72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2d72b4: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x2d72b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2d72b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D72B8u;
    SET_GPR_U32(ctx, 31, 0x2D72C0u);
    ctx->pc = 0x2D72BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D72B8u;
            // 0x2d72bc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72C0u; }
        if (ctx->pc != 0x2D72C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72C0u; }
        if (ctx->pc != 0x2D72C0u) { return; }
    }
    ctx->pc = 0x2D72C0u;
label_2d72c0:
    // 0x2d72c0: 0x2610fff3  addiu       $s0, $s0, -0xD
    ctx->pc = 0x2d72c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967283));
    // 0x2d72c4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d72c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d72c8: 0x2685fff6  addiu       $a1, $s4, -0xA
    ctx->pc = 0x2d72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x2d72cc: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2d72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2d72d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d72d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72d4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D72D4u;
    SET_GPR_U32(ctx, 31, 0x2D72DCu);
    ctx->pc = 0x2D72D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D72D4u;
            // 0x2d72d8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72DCu; }
        if (ctx->pc != 0x2D72DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72DCu; }
        if (ctx->pc != 0x2D72DCu) { return; }
    }
    ctx->pc = 0x2D72DCu;
label_2d72dc:
    // 0x2d72dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d72e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d72e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72e4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d72e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72ec: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x2d72ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2d72f0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D72F0u;
    SET_GPR_U32(ctx, 31, 0x2D72F8u);
    ctx->pc = 0x2D72F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D72F0u;
            // 0x2d72f4: 0x27a703b0  addiu       $a3, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72F8u; }
        if (ctx->pc != 0x2D72F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D72F8u; }
        if (ctx->pc != 0x2D72F8u) { return; }
    }
    ctx->pc = 0x2D72F8u;
label_2d72f8:
    // 0x2d72f8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d72fc: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2d72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2d7300: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x2d7300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2d7304: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d7304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d7308: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7308u;
    SET_GPR_U32(ctx, 31, 0x2D7310u);
    ctx->pc = 0x2D730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7308u;
            // 0x2d730c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7310u; }
        if (ctx->pc != 0x2D7310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7310u; }
        if (ctx->pc != 0x2D7310u) { return; }
    }
    ctx->pc = 0x2D7310u;
label_2d7310:
    // 0x2d7310: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7314: 0x2685fff6  addiu       $a1, $s4, -0xA
    ctx->pc = 0x2d7314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x2d7318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d7318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d731c: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x2d731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x2d7320: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7320u;
    SET_GPR_U32(ctx, 31, 0x2D7328u);
    ctx->pc = 0x2D7324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7320u;
            // 0x2d7324: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7328u; }
        if (ctx->pc != 0x2D7328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7328u; }
        if (ctx->pc != 0x2D7328u) { return; }
    }
    ctx->pc = 0x2D7328u;
label_2d7328:
    // 0x2d7328: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d732c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d732cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7330: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d7330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7334: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7338: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x2d7338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x2d733c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D733Cu;
    SET_GPR_U32(ctx, 31, 0x2D7344u);
    ctx->pc = 0x2D7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D733Cu;
            // 0x2d7340: 0x27a703d0  addiu       $a3, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7344u; }
        if (ctx->pc != 0x2D7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7344u; }
        if (ctx->pc != 0x2D7344u) { return; }
    }
    ctx->pc = 0x2D7344u;
label_2d7344:
    // 0x2d7344: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D7344u;
    {
        const bool branch_taken_0x2d7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7344) {
            ctx->pc = 0x2D73F8u;
            goto label_2d73f8;
        }
    }
    ctx->pc = 0x2D734Cu;
label_2d734c:
    // 0x2d734c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2d734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7350: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x2d7350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d7354: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D7354u;
    {
        const bool branch_taken_0x2d7354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7354u;
            // 0x2d7358: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7354) {
            ctx->pc = 0x2D73F8u;
            goto label_2d73f8;
        }
    }
    ctx->pc = 0x2D735Cu;
    // 0x2d735c: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x2d735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x2d7360: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x2d7360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2d7364: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x2d7364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2d7368: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7368u;
    SET_GPR_U32(ctx, 31, 0x2D7370u);
    ctx->pc = 0x2D736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7368u;
            // 0x2d736c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7370u; }
        if (ctx->pc != 0x2D7370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7370u; }
        if (ctx->pc != 0x2D7370u) { return; }
    }
    ctx->pc = 0x2D7370u;
label_2d7370:
    // 0x2d7370: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7374: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d7374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d7378: 0x2685fff6  addiu       $a1, $s4, -0xA
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x2d737c: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2d737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2d7380: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d7380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7384: 0x2450fff8  addiu       $s0, $v0, -0x8
    ctx->pc = 0x2d7384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d7388: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7388u;
    SET_GPR_U32(ctx, 31, 0x2D7390u);
    ctx->pc = 0x2D738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7388u;
            // 0x2d738c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7390u; }
        if (ctx->pc != 0x2D7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7390u; }
        if (ctx->pc != 0x2D7390u) { return; }
    }
    ctx->pc = 0x2D7390u;
label_2d7390:
    // 0x2d7390: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7394: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d7394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7398: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d739c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d739cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73a0: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x2d73a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2d73a4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D73A4u;
    SET_GPR_U32(ctx, 31, 0x2D73ACu);
    ctx->pc = 0x2D73A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73A4u;
            // 0x2d73a8: 0x27a703f0  addiu       $a3, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73ACu; }
        if (ctx->pc != 0x2D73ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73ACu; }
        if (ctx->pc != 0x2D73ACu) { return; }
    }
    ctx->pc = 0x2D73ACu;
label_2d73ac:
    // 0x2d73ac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d73acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d73b0: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x2d73b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x2d73b4: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x2d73b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2d73b8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d73b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d73bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D73BCu;
    SET_GPR_U32(ctx, 31, 0x2D73C4u);
    ctx->pc = 0x2D73C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73BCu;
            // 0x2d73c0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73C4u; }
        if (ctx->pc != 0x2D73C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73C4u; }
        if (ctx->pc != 0x2D73C4u) { return; }
    }
    ctx->pc = 0x2D73C4u;
label_2d73c4:
    // 0x2d73c4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d73c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d73c8: 0x2685fff6  addiu       $a1, $s4, -0xA
    ctx->pc = 0x2d73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x2d73cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d73ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73d0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x2d73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2d73d4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D73D4u;
    SET_GPR_U32(ctx, 31, 0x2D73DCu);
    ctx->pc = 0x2D73D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73D4u;
            // 0x2d73d8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73DCu; }
        if (ctx->pc != 0x2D73DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73DCu; }
        if (ctx->pc != 0x2D73DCu) { return; }
    }
    ctx->pc = 0x2D73DCu;
label_2d73dc:
    // 0x2d73dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d73e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d73e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d73e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73e8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d73ec: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x2d73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2d73f0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D73F0u;
    SET_GPR_U32(ctx, 31, 0x2D73F8u);
    ctx->pc = 0x2D73F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73F0u;
            // 0x2d73f4: 0x27a70410  addiu       $a3, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73F8u; }
        if (ctx->pc != 0x2D73F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73F8u; }
        if (ctx->pc != 0x2D73F8u) { return; }
    }
    ctx->pc = 0x2D73F8u;
label_2d73f8:
    // 0x2d73f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d73f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2d73fc:
    // 0x2d73fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d73fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7400: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d7400u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7404: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d7404u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7408: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d7408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d740c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d740cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d7410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d741c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d741cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7420: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7420u;
            // 0x2d7424: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7428u;
}
