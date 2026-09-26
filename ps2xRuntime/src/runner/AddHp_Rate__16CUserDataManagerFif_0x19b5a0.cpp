#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHp_Rate__16CUserDataManagerFif
// Address: 0x19b5a0 - 0x19b618
void AddHp_Rate__16CUserDataManagerFif_0x19b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHp_Rate__16CUserDataManagerFif_0x19b5a0");
#endif

    switch (ctx->pc) {
        case 0x19b5b8u: goto label_19b5b8;
        case 0x19b5d8u: goto label_19b5d8;
        case 0x19b604u: goto label_19b604;
        default: break;
    }

    ctx->pc = 0x19b5a0u;

    // 0x19b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b5a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19b5ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19b5acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19b5b0: 0xc066d30  jal         func_19B4C0
    ctx->pc = 0x19B5B0u;
    SET_GPR_U32(ctx, 31, 0x19B5B8u);
    ctx->pc = 0x19B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5B0u;
            // 0x19b5b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    if (runtime->hasFunction(0x19B4C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B8u; }
        if (ctx->pc != 0x19B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaHpGage__16CUserDataManagerFi_0x19b4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B8u; }
        if (ctx->pc != 0x19B5B8u) { return; }
    }
    ctx->pc = 0x19B5B8u;
label_19b5b8:
    // 0x19b5b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B5BCu;
    {
        const bool branch_taken_0x19b5bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5BCu;
            // 0x19b5c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5bc) {
            ctx->pc = 0x19B5D0u;
            goto label_19b5d0;
        }
    }
    ctx->pc = 0x19B5C4u;
    // 0x19b5c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b5c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19B5C8u;
    {
        const bool branch_taken_0x19b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5C8u;
            // 0x19b5cc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5c8) {
            ctx->pc = 0x19B608u;
            goto label_19b608;
        }
    }
    ctx->pc = 0x19B5D0u;
label_19b5d0:
    // 0x19b5d0: 0xc065b58  jal         func_196D60
    ctx->pc = 0x19B5D0u;
    SET_GPR_U32(ctx, 31, 0x19B5D8u);
    ctx->pc = 0x19B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5D0u;
            // 0x19b5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (runtime->hasFunction(0x196D60u)) {
        auto targetFn = runtime->lookupFunction(0x196D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D8u; }
        if (ctx->pc != 0x19B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRate__11COMMON_GAGEFf_0x196d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D8u; }
        if (ctx->pc != 0x19B5D8u) { return; }
    }
    ctx->pc = 0x19B5D8u;
label_19b5d8:
    // 0x19b5d8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19b5e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b5e4: 0x0  nop
    ctx->pc = 0x19b5e4u;
    // NOP
    // 0x19b5e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b5ec: 0x0  nop
    ctx->pc = 0x19b5ecu;
    // NOP
    // 0x19b5f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19B5F0u;
    {
        const bool branch_taken_0x19b5f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5F0u;
            // 0x19b5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5f0) {
            ctx->pc = 0x19B5FCu;
            goto label_19b5fc;
        }
    }
    ctx->pc = 0x19B5F8u;
    // 0x19b5f8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x19b5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_19b5fc:
    // 0x19b5fc: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19B5FCu;
    SET_GPR_U32(ctx, 31, 0x19B604u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B604u; }
        if (ctx->pc != 0x19B604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B604u; }
        if (ctx->pc != 0x19B604u) { return; }
    }
    ctx->pc = 0x19B604u;
label_19b604:
    // 0x19b604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b608:
    // 0x19b608: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19b60c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19b60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b610: 0x3e00008  jr          $ra
    ctx->pc = 0x19B610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B610u;
            // 0x19b614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B618u;
}
