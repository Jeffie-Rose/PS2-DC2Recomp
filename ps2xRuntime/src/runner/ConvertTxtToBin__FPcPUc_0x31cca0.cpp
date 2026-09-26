#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertTxtToBin__FPcPUc
// Address: 0x31cca0 - 0x31cdb8
void ConvertTxtToBin__FPcPUc_0x31cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertTxtToBin__FPcPUc_0x31cca0");
#endif

    switch (ctx->pc) {
        case 0x31ccdcu: goto label_31ccdc;
        case 0x31cd18u: goto label_31cd18;
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd54u: goto label_31cd54;
        default: break;
    }

    ctx->pc = 0x31cca0u;

    // 0x31cca0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31cca4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31cca8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31ccac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31ccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31ccb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ccb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ccb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ccbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ccc0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x31ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x31ccc4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x31ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x31ccc8: 0x8fb20080  lw          $s2, 0x80($sp)
    ctx->pc = 0x31ccc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cccc: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x31ccccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31ccd0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x31ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31ccd4: 0xc04a422  jal         func_129088
    ctx->pc = 0x31CCD4u;
    SET_GPR_U32(ctx, 31, 0x31CCDCu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CCDCu; }
        if (ctx->pc != 0x31CCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CCDCu; }
        if (ctx->pc != 0x31CCDCu) { return; }
    }
    ctx->pc = 0x31CCDCu;
label_31ccdc:
    // 0x31ccdc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31ccdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cce0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31cce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cce4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31cce8: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x31cce8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31ccec: 0x0  nop
    ctx->pc = 0x31ccecu;
    // NOP
    // 0x31ccf0: 0x0  nop
    ctx->pc = 0x31ccf0u;
    // NOP
    // 0x31ccf4: 0x1010  mfhi        $v0
    ctx->pc = 0x31ccf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31ccf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CCF8u;
    {
        const bool branch_taken_0x31ccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ccf8) {
            ctx->pc = 0x31CD0Cu;
            goto label_31cd0c;
        }
    }
    ctx->pc = 0x31CD00u;
    // 0x31cd00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31cd04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31CD04u;
    {
        const bool branch_taken_0x31cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd04) {
            ctx->pc = 0x31CD90u;
            goto label_31cd90;
        }
    }
    ctx->pc = 0x31CD0Cu;
label_31cd0c:
    // 0x31cd0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31cd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31CD10u;
    {
        const bool branch_taken_0x31cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd10) {
            ctx->pc = 0x31CD80u;
            goto label_31cd80;
        }
    }
    ctx->pc = 0x31CD18u;
label_31cd18:
    // 0x31cd18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd20: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x31cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x31cd24: 0xc0c72a4  jal         func_31CA90
    ctx->pc = 0x31CD24u;
    SET_GPR_U32(ctx, 31, 0x31CD2Cu);
    ctx->pc = 0x31CA90u;
    if (runtime->hasFunction(0x31CA90u)) {
        auto targetFn = runtime->lookupFunction(0x31CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CD2Cu; }
        if (ctx->pc != 0x31CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvTxtToLong__FPcPUl_0x31ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CD2Cu; }
        if (ctx->pc != 0x31CD2Cu) { return; }
    }
    ctx->pc = 0x31CD2Cu;
label_31cd2c:
    // 0x31cd2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CD2Cu;
    {
        const bool branch_taken_0x31cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cd2c) {
            ctx->pc = 0x31CD40u;
            goto label_31cd40;
        }
    }
    ctx->pc = 0x31CD34u;
    // 0x31cd34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31cd38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31CD38u;
    {
        const bool branch_taken_0x31cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd38) {
            ctx->pc = 0x31CD90u;
            goto label_31cd90;
        }
    }
    ctx->pc = 0x31CD40u;
label_31cd40:
    // 0x31cd40: 0x2652000b  addiu       $s2, $s2, 0xB
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11));
    // 0x31cd44: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x31cd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x31cd48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31cd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31CD4Cu;
    {
        const bool branch_taken_0x31cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd4c) {
            ctx->pc = 0x31CD70u;
            goto label_31cd70;
        }
    }
    ctx->pc = 0x31CD54u;
label_31cd54:
    // 0x31cd54: 0x0  nop
    ctx->pc = 0x31cd54u;
    // NOP
    // 0x31cd58: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x31cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31cd5c: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x31cd5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x31cd60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31cd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd64: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x31cd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31cd68: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x31cd68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31cd6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31cd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31cd70:
    // 0x31cd70: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x31cd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x31cd74: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31CD74u;
    {
        const bool branch_taken_0x31cd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cd74) {
            ctx->pc = 0x31CD54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cd54;
        }
    }
    ctx->pc = 0x31CD7Cu;
    // 0x31cd7c: 0x2673000b  addiu       $s3, $s3, 0xB
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11));
label_31cd80:
    // 0x31cd80: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x31cd80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x31cd84: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x31CD84u;
    {
        const bool branch_taken_0x31cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cd84) {
            ctx->pc = 0x31CD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cd18;
        }
    }
    ctx->pc = 0x31CD8Cu;
    // 0x31cd8c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31cd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31cd90:
    // 0x31cd90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31cd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cd94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31cd94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cd98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31cd98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cd9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cd9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cda0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31cda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cda4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cda8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cdac: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x31cdacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31cdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CDB8u;
}
