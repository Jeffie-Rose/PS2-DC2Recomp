#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteImage__11CCharacter2Fv
// Address: 0x174e60 - 0x174f44
void DeleteImage__11CCharacter2Fv_0x174e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteImage__11CCharacter2Fv_0x174e60");
#endif

    switch (ctx->pc) {
        case 0x174e98u: goto label_174e98;
        case 0x174eacu: goto label_174eac;
        case 0x174ebcu: goto label_174ebc;
        case 0x174ee4u: goto label_174ee4;
        case 0x174f04u: goto label_174f04;
        default: break;
    }

    ctx->pc = 0x174e60u;

    // 0x174e60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x174e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x174e68: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x174e6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x174e70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174e74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x174e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174e84: 0x8e8502e4  lw          $a1, 0x2E4($s4)
    ctx->pc = 0x174e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x174e88: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x174e8c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x174e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x174e90: 0xc04bc24  jal         func_12F090
    ctx->pc = 0x174E90u;
    SET_GPR_U32(ctx, 31, 0x174E98u);
    ctx->pc = 0x174E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E90u;
            // 0x174e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F090u;
    if (runtime->hasFunction(0x12F090u)) {
        auto targetFn = runtime->lookupFunction(0x12F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E98u; }
        if (ctx->pc != 0x174E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGroupNameList__17mgCTextureManagerFiPi_0x12f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E98u; }
        if (ctx->pc != 0x174E98u) { return; }
    }
    ctx->pc = 0x174E98u;
label_174e98:
    // 0x174e98: 0x8e9102e0  lw          $s1, 0x2E0($s4)
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x174e9c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x174E9Cu;
    {
        const bool branch_taken_0x174e9c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x174e9c) {
            ctx->pc = 0x174ED0u;
            goto label_174ed0;
        }
    }
    ctx->pc = 0x174EA4u;
    // 0x174ea4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174EA4u;
    {
        const bool branch_taken_0x174ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ea4) {
            ctx->pc = 0x174EC0u;
            goto label_174ec0;
        }
    }
    ctx->pc = 0x174EACu;
label_174eac:
    // 0x174eac: 0x8e8502e4  lw          $a1, 0x2E4($s4)
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x174eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174eb4: 0xc04bc40  jal         func_12F100
    ctx->pc = 0x174EB4u;
    SET_GPR_U32(ctx, 31, 0x174EBCu);
    ctx->pc = 0x174EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174EB4u;
            // 0x174eb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (runtime->hasFunction(0x12F100u)) {
        auto targetFn = runtime->lookupFunction(0x12F100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EBCu; }
        if (ctx->pc != 0x174EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnimeGroup__17mgCTextureManagerFii_0x12f100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EBCu; }
        if (ctx->pc != 0x174EBCu) { return; }
    }
    ctx->pc = 0x174EBCu;
label_174ebc:
    // 0x174ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174ec0:
    // 0x174ec0: 0x8e8302dc  lw          $v1, 0x2DC($s4)
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 732)));
    // 0x174ec4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x174ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174ec8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x174EC8u;
    {
        const bool branch_taken_0x174ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174ec8) {
            ctx->pc = 0x174EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174eac;
        }
    }
    ctx->pc = 0x174ED0u;
label_174ed0:
    // 0x174ed0: 0x8e9302c4  lw          $s3, 0x2C4($s4)
    ctx->pc = 0x174ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 708)));
    // 0x174ed4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x174ED4u;
    {
        const bool branch_taken_0x174ed4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174ED4u;
            // 0x174ed8: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed4) {
            ctx->pc = 0x174F24u;
            goto label_174f24;
        }
    }
    ctx->pc = 0x174EDCu;
    // 0x174edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174EDCu;
    {
        const bool branch_taken_0x174edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174EDCu;
            // 0x174ee0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174edc) {
            ctx->pc = 0x174F10u;
            goto label_174f10;
        }
    }
    ctx->pc = 0x174EE4u;
label_174ee4:
    // 0x174ee4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x174ee4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174ee8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x174ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x174eec: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174EECu;
    {
        const bool branch_taken_0x174eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x174eec) {
            ctx->pc = 0x174F04u;
            goto label_174f04;
        }
    }
    ctx->pc = 0x174EF4u;
    // 0x174ef4: 0x8e8602e4  lw          $a2, 0x2E4($s4)
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x174ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174efc: 0xc04b93c  jal         func_12E4F0
    ctx->pc = 0x174EFCu;
    SET_GPR_U32(ctx, 31, 0x174F04u);
    ctx->pc = 0x174F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174EFCu;
            // 0x174f00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4F0u;
    if (runtime->hasFunction(0x12E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F04u; }
        if (ctx->pc != 0x174F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F04u; }
        if (ctx->pc != 0x174F04u) { return; }
    }
    ctx->pc = 0x174F04u;
label_174f04:
    // 0x174f04: 0x0  nop
    ctx->pc = 0x174f04u;
    // NOP
    // 0x174f08: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x174f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x174f0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174f10:
    // 0x174f10: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x174f14: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x174f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x174f18: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x174F18u;
    {
        const bool branch_taken_0x174f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174f18) {
            ctx->pc = 0x174EE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174ee4;
        }
    }
    ctx->pc = 0x174F20u;
    // 0x174f20: 0xae8002c4  sw          $zero, 0x2C4($s4)
    ctx->pc = 0x174f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 708), GPR_U32(ctx, 0));
label_174f24:
    // 0x174f24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x174f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174f28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x174F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F3Cu;
            // 0x174f40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174F44u;
}
