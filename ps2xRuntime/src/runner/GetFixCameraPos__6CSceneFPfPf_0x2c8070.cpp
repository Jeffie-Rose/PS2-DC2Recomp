#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFixCameraPos__6CSceneFPfPf
// Address: 0x2c8070 - 0x2c8120
void GetFixCameraPos__6CSceneFPfPf_0x2c8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFixCameraPos__6CSceneFPfPf_0x2c8070");
#endif

    switch (ctx->pc) {
        case 0x2c80b8u: goto label_2c80b8;
        case 0x2c80ccu: goto label_2c80cc;
        case 0x2c80e0u: goto label_2c80e0;
        default: break;
    }

    ctx->pc = 0x2c8070u;

    // 0x2c8070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c8070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c8074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8078: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c807c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2c807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c8080: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c8084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c808c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8094: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x2c8094u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c8098: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c8098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c809c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c809cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c80a0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2c80a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2c80a4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2c80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c80ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c80acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c80b0: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2C80B0u;
    SET_GPR_U32(ctx, 31, 0x2C80B8u);
    ctx->pc = 0x2C80B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80B0u;
            // 0x2c80b4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80B8u; }
        if (ctx->pc != 0x2C80B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80B8u; }
        if (ctx->pc != 0x2C80B8u) { return; }
    }
    ctx->pc = 0x2C80B8u;
label_2c80b8:
    // 0x2c80b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c80b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c80bc: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2c80bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c80c0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C80C0u;
    {
        const bool branch_taken_0x2c80c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80C0u;
            // 0x2c80c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80c0) {
            ctx->pc = 0x2C8100u;
            goto label_2c8100;
        }
    }
    ctx->pc = 0x2C80C8u;
    // 0x2c80c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c80c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c80cc:
    // 0x2c80cc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2c80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2c80d0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c80d4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2c80d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c80d8: 0xc057cf4  jal         func_15F3D0
    ctx->pc = 0x2C80D8u;
    SET_GPR_U32(ctx, 31, 0x2C80E0u);
    ctx->pc = 0x2C80DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80D8u;
            // 0x2c80dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F3D0u;
    if (runtime->hasFunction(0x15F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80E0u; }
        if (ctx->pc != 0x2C80E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFixCameraPos__4CMapFPfPf_0x15f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80E0u; }
        if (ctx->pc != 0x2C80E0u) { return; }
    }
    ctx->pc = 0x2C80E0u;
label_2c80e0:
    // 0x2c80e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C80E0u;
    {
        const bool branch_taken_0x2c80e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80E0u;
            // 0x2c80e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80e0) {
            ctx->pc = 0x2C80F0u;
            goto label_2c80f0;
        }
    }
    ctx->pc = 0x2C80E8u;
    // 0x2c80e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C80E8u;
    {
        const bool branch_taken_0x2c80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80E8u;
            // 0x2c80ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80e8) {
            ctx->pc = 0x2C8108u;
            goto label_2c8108;
        }
    }
    ctx->pc = 0x2C80F0u;
label_2c80f0:
    // 0x2c80f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c80f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c80f4: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2c80f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c80f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C80F8u;
    {
        const bool branch_taken_0x2c80f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C80F8u;
            // 0x2c80fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80f8) {
            ctx->pc = 0x2C80CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c80cc;
        }
    }
    ctx->pc = 0x2C8100u;
label_2c8100:
    // 0x2c8100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8108:
    // 0x2c8108: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c810c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c810cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8118: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8118u;
            // 0x2c811c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8120u;
}
