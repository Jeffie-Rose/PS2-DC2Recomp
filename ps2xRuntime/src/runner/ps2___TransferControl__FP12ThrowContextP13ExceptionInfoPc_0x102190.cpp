#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __TransferControl__FP12ThrowContextP13ExceptionInfoPc
// Address: 0x102190 - 0x1021f4
void ps2___TransferControl__FP12ThrowContextP13ExceptionInfoPc_0x102190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___TransferControl__FP12ThrowContextP13ExceptionInfoPc_0x102190");
#endif

    switch (ctx->pc) {
        case 0x102190u: goto label_102190;
        case 0x102194u: goto label_102194;
        case 0x102198u: goto label_102198;
        case 0x10219cu: goto label_10219c;
        case 0x1021a0u: goto label_1021a0;
        case 0x1021a4u: goto label_1021a4;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021acu: goto label_1021ac;
        case 0x1021b0u: goto label_1021b0;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021b8u: goto label_1021b8;
        case 0x1021bcu: goto label_1021bc;
        case 0x1021c0u: goto label_1021c0;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021c8u: goto label_1021c8;
        case 0x1021ccu: goto label_1021cc;
        case 0x1021d0u: goto label_1021d0;
        case 0x1021d4u: goto label_1021d4;
        case 0x1021d8u: goto label_1021d8;
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        default: break;
    }

    ctx->pc = 0x102190u;

label_102190:
    // 0x102190: 0x78900120  lq          $s0, 0x120($a0)
    ctx->pc = 0x102190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 288)));
label_102194:
    // 0x102194: 0x78910130  lq          $s1, 0x130($a0)
    ctx->pc = 0x102194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_102198:
    // 0x102198: 0x78920140  lq          $s2, 0x140($a0)
    ctx->pc = 0x102198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 320)));
label_10219c:
    // 0x10219c: 0x78930150  lq          $s3, 0x150($a0)
    ctx->pc = 0x10219cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 336)));
label_1021a0:
    // 0x1021a0: 0x78940160  lq          $s4, 0x160($a0)
    ctx->pc = 0x1021a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 352)));
label_1021a4:
    // 0x1021a4: 0x78950170  lq          $s5, 0x170($a0)
    ctx->pc = 0x1021a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 368)));
label_1021a8:
    // 0x1021a8: 0x78960180  lq          $s6, 0x180($a0)
    ctx->pc = 0x1021a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 384)));
label_1021ac:
    // 0x1021ac: 0x78970190  lq          $s7, 0x190($a0)
    ctx->pc = 0x1021acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 400)));
label_1021b0:
    // 0x1021b0: 0x789e0200  lq          $fp, 0x200($a0)
    ctx->pc = 0x1021b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 512)));
label_1021b4:
    // 0x1021b4: 0xc4940288  lwc1        $f20, 0x288($a0)
    ctx->pc = 0x1021b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1021b8:
    // 0x1021b8: 0xc495028c  lwc1        $f21, 0x28C($a0)
    ctx->pc = 0x1021b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1021bc:
    // 0x1021bc: 0xc4960290  lwc1        $f22, 0x290($a0)
    ctx->pc = 0x1021bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1021c0:
    // 0x1021c0: 0xc4970294  lwc1        $f23, 0x294($a0)
    ctx->pc = 0x1021c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1021c4:
    // 0x1021c4: 0xc4980298  lwc1        $f24, 0x298($a0)
    ctx->pc = 0x1021c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1021c8:
    // 0x1021c8: 0xc499029c  lwc1        $f25, 0x29C($a0)
    ctx->pc = 0x1021c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1021cc:
    // 0x1021cc: 0xc49a02a0  lwc1        $f26, 0x2A0($a0)
    ctx->pc = 0x1021ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1021d0:
    // 0x1021d0: 0xc49b02a4  lwc1        $f27, 0x2A4($a0)
    ctx->pc = 0x1021d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1021d4:
    // 0x1021d4: 0xc49c02a8  lwc1        $f28, 0x2A8($a0)
    ctx->pc = 0x1021d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1021d8:
    // 0x1021d8: 0xc49d02ac  lwc1        $f29, 0x2AC($a0)
    ctx->pc = 0x1021d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1021dc:
    // 0x1021dc: 0xc49e02b0  lwc1        $f30, 0x2B0($a0)
    ctx->pc = 0x1021dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1021e0:
    // 0x1021e0: 0xc49f02b4  lwc1        $f31, 0x2B4($a0)
    ctx->pc = 0x1021e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1021e4:
    // 0x1021e4: 0x8c9d001c  lw          $sp, 0x1C($a0)
    ctx->pc = 0x1021e4u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1021e8:
    // 0x1021e8: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x1021e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1021ec:
    // 0x1021ec: 0xc00008  jr          $a2
label_1021f0:
    if (ctx->pc == 0x1021F0u) {
        ctx->pc = 0x1021F0u;
            // 0x1021f0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->pc = 0x1021F4u;
        goto label_fallthrough_0x1021ec;
    }
    ctx->pc = 0x1021ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x1021F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021ECu;
            // 0x1021f0: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1021ec:
    ctx->pc = 0x1021F4u;
}
