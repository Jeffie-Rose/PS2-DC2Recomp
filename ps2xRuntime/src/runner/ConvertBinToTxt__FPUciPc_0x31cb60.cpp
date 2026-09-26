#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertBinToTxt__FPUciPc
// Address: 0x31cb60 - 0x31cc94
void ConvertBinToTxt__FPUciPc_0x31cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertBinToTxt__FPUciPc_0x31cb60");
#endif

    switch (ctx->pc) {
        case 0x31cb9cu: goto label_31cb9c;
        case 0x31cbc4u: goto label_31cbc4;
        case 0x31cbfcu: goto label_31cbfc;
        case 0x31cc10u: goto label_31cc10;
        case 0x31cc3cu: goto label_31cc3c;
        case 0x31cc58u: goto label_31cc58;
        case 0x31cc74u: goto label_31cc74;
        default: break;
    }

    ctx->pc = 0x31cb60u;

    // 0x31cb60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31cb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31cb68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31cb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cb74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31cb78: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x31cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x31cb7c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x31cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x31cb80: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x31cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x31cb84: 0x8fb30080  lw          $s3, 0x80($sp)
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cb88: 0x8fb20070  lw          $s2, 0x70($sp)
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cb8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cb90: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x31cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cb94: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31CB94u;
    {
        const bool branch_taken_0x31cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cb94) {
            ctx->pc = 0x31CC5Cu;
            goto label_31cc5c;
        }
    }
    ctx->pc = 0x31CB9Cu;
label_31cb9c:
    // 0x31cb9c: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x31cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x31cba0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x31cba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cba4: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x31cba4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31cba8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31CBA8u;
    {
        const bool branch_taken_0x31cba8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cba8) {
            ctx->pc = 0x31CBB4u;
            goto label_31cbb4;
        }
    }
    ctx->pc = 0x31CBB0u;
    // 0x31cbb0: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x31cbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31cbb4:
    // 0x31cbb4: 0x0  nop
    ctx->pc = 0x31cbb4u;
    // NOP
    // 0x31cbb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31cbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31CBBCu;
    {
        const bool branch_taken_0x31cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cbbc) {
            ctx->pc = 0x31CBE0u;
            goto label_31cbe0;
        }
    }
    ctx->pc = 0x31CBC4u;
label_31cbc4:
    // 0x31cbc4: 0x0  nop
    ctx->pc = 0x31cbc4u;
    // NOP
    // 0x31cbc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31cbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbcc: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31cbd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31cbd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cbd4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x31cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31cbd8: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x31cbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x31cbdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31cbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31cbe0:
    // 0x31cbe0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x31cbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31cbe4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31CBE4u;
    {
        const bool branch_taken_0x31cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cbe4) {
            ctx->pc = 0x31CBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cbc4;
        }
    }
    ctx->pc = 0x31CBECu;
    // 0x31cbec: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x31cbecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cbf0: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x31cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x31cbf4: 0xc0c7270  jal         func_31C9C0
    ctx->pc = 0x31CBF4u;
    SET_GPR_U32(ctx, 31, 0x31CBFCu);
    ctx->pc = 0x31C9C0u;
    if (runtime->hasFunction(0x31C9C0u)) {
        auto targetFn = runtime->lookupFunction(0x31C9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CBFCu; }
        if (ctx->pc != 0x31CBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvLongToTxt__FUlPc_0x31c9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CBFCu; }
        if (ctx->pc != 0x31CBFCu) { return; }
    }
    ctx->pc = 0x31CBFCu;
label_31cbfc:
    // 0x31cbfc: 0xa3a00063  sb          $zero, 0x63($sp)
    ctx->pc = 0x31cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 99), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cc00: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x31cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x31cc04: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x31cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31cc08: 0xc0c72a4  jal         func_31CA90
    ctx->pc = 0x31CC08u;
    SET_GPR_U32(ctx, 31, 0x31CC10u);
    ctx->pc = 0x31CA90u;
    if (runtime->hasFunction(0x31CA90u)) {
        auto targetFn = runtime->lookupFunction(0x31CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC10u; }
        if (ctx->pc != 0x31CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvTxtToLong__FPcPUl_0x31ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC10u; }
        if (ctx->pc != 0x31CC10u) { return; }
    }
    ctx->pc = 0x31CC10u;
label_31cc10:
    // 0x31cc10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CC10u;
    {
        const bool branch_taken_0x31cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc10) {
            ctx->pc = 0x31CC28u;
            goto label_31cc28;
        }
    }
    ctx->pc = 0x31CC18u;
    // 0x31cc18: 0xdfa30050  ld          $v1, 0x50($sp)
    ctx->pc = 0x31cc18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cc1c: 0xdfa20068  ld          $v0, 0x68($sp)
    ctx->pc = 0x31cc1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31cc20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31CC20u;
    {
        const bool branch_taken_0x31cc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cc20) {
            ctx->pc = 0x31CC48u;
            goto label_31cc48;
        }
    }
    ctx->pc = 0x31CC28u;
label_31cc28:
    // 0x31cc28: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31cc2c: 0x24842ff8  addiu       $a0, $a0, 0x2FF8
    ctx->pc = 0x31cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12280));
    // 0x31cc30: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x31cc30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cc34: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31CC34u;
    SET_GPR_U32(ctx, 31, 0x31CC3Cu);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC3Cu; }
        if (ctx->pc != 0x31CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC3Cu; }
        if (ctx->pc != 0x31CC3Cu) { return; }
    }
    ctx->pc = 0x31CC3Cu;
label_31cc3c:
    // 0x31cc3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31cc40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31CC40u;
    {
        const bool branch_taken_0x31cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc40) {
            ctx->pc = 0x31CC74u;
            goto label_31cc74;
        }
    }
    ctx->pc = 0x31CC48u;
label_31cc48:
    // 0x31cc48: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x31cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cc4c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x31cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x31cc50: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31CC50u;
    SET_GPR_U32(ctx, 31, 0x31CC58u);
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC58u; }
        if (ctx->pc != 0x31CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC58u; }
        if (ctx->pc != 0x31CC58u) { return; }
    }
    ctx->pc = 0x31CC58u;
label_31cc58:
    // 0x31cc58: 0x2719823  subu        $s3, $s3, $s1
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_31cc5c:
    // 0x31cc5c: 0x0  nop
    ctx->pc = 0x31cc5cu;
    // NOP
    // 0x31cc60: 0x1e60ffce  bgtz        $s3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x31CC60u;
    {
        const bool branch_taken_0x31cc60 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x31cc60) {
            ctx->pc = 0x31CB9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cb9c;
        }
    }
    ctx->pc = 0x31CC68u;
    // 0x31cc68: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cc6c: 0xc04a422  jal         func_129088
    ctx->pc = 0x31CC6Cu;
    SET_GPR_U32(ctx, 31, 0x31CC74u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC74u; }
        if (ctx->pc != 0x31CC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CC74u; }
        if (ctx->pc != 0x31CC74u) { return; }
    }
    ctx->pc = 0x31CC74u;
label_31cc74:
    // 0x31cc74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cc78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31cc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cc88: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x31cc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31cc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x31CC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CC94u;
}
