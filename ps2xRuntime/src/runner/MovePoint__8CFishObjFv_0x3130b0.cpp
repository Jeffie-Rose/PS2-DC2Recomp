#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovePoint__8CFishObjFv
// Address: 0x3130b0 - 0x31313c
void MovePoint__8CFishObjFv_0x3130b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovePoint__8CFishObjFv_0x3130b0");
#endif

    switch (ctx->pc) {
        case 0x3130d8u: goto label_3130d8;
        case 0x3130ecu: goto label_3130ec;
        default: break;
    }

    ctx->pc = 0x3130b0u;

    // 0x3130b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3130b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3130b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3130b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3130b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3130b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3130bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3130bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3130c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3130c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3130c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3130c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3130c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3130cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3130ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3130D0u;
    {
        const bool branch_taken_0x3130d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3130D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3130D0u;
            // 0x3130d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130d0) {
            ctx->pc = 0x31310Cu;
            goto label_31310c;
        }
    }
    ctx->pc = 0x3130D8u;
label_3130d8:
    // 0x3130d8: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3130d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3130dc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x3130dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3130e0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x3130e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3130e4: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x3130E4u;
    SET_GPR_U32(ctx, 31, 0x3130ECu);
    ctx->pc = 0x3130E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3130E4u;
            // 0x3130e8: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3130ECu; }
        if (ctx->pc != 0x3130ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3130ECu; }
        if (ctx->pc != 0x3130ECu) { return; }
    }
    ctx->pc = 0x3130ECu;
label_3130ec:
    // 0x3130ec: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x3130ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3130f0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x3130f4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3130f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3130f8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x3130f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3130fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3130fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x313104: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x313104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x313108: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x313108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_31310c:
    // 0x31310c: 0x0  nop
    ctx->pc = 0x31310cu;
    // NOP
    // 0x313110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x313110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x313114: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x313114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x313118: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x313118u;
    {
        const bool branch_taken_0x313118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313118u;
            // 0x31311c: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313118) {
            ctx->pc = 0x3130D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3130d8;
        }
    }
    ctx->pc = 0x313120u;
    // 0x313120: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x313120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x313124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31312c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31312cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313134: 0x3e00008  jr          $ra
    ctx->pc = 0x313134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313134u;
            // 0x313138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31313Cu;
}
