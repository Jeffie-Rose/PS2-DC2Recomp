#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishPlace__14FISH_PLACE_MAPFPf
// Address: 0x303aa0 - 0x303b24
void CheckFishPlace__14FISH_PLACE_MAPFPf_0x303aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishPlace__14FISH_PLACE_MAPFPf_0x303aa0");
#endif

    switch (ctx->pc) {
        case 0x303ac0u: goto label_303ac0;
        case 0x303af4u: goto label_303af4;
        default: break;
    }

    ctx->pc = 0x303aa0u;

    // 0x303aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x303aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ab8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x303AB8u;
    SET_GPR_U32(ctx, 31, 0x303AC0u);
    ctx->pc = 0x303ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303AB8u;
            // 0x303abc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303AC0u; }
        if (ctx->pc != 0x303AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303AC0u; }
        if (ctx->pc != 0x303AC0u) { return; }
    }
    ctx->pc = 0x303AC0u;
label_303ac0:
    // 0x303ac0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x303ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x303ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303ac8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303AC8u;
    {
        const bool branch_taken_0x303ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303ac8) {
            ctx->pc = 0x303AD8u;
            goto label_303ad8;
        }
    }
    ctx->pc = 0x303AD0u;
    // 0x303ad0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x303AD0u;
    {
        const bool branch_taken_0x303ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303AD0u;
            // 0x303ad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ad0) {
            ctx->pc = 0x303B10u;
            goto label_303b10;
        }
    }
    ctx->pc = 0x303AD8u;
label_303ad8:
    // 0x303ad8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x303ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ae0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x303ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303ae4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x303ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x303ae8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x303ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303aec: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x303AECu;
    SET_GPR_U32(ctx, 31, 0x303AF4u);
    ctx->pc = 0x303AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303AECu;
            // 0x303af0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303AF4u; }
        if (ctx->pc != 0x303AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303AF4u; }
        if (ctx->pc != 0x303AF4u) { return; }
    }
    ctx->pc = 0x303AF4u;
label_303af4:
    // 0x303af4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x303af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303af8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x303af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303afc: 0x0  nop
    ctx->pc = 0x303afcu;
    // NOP
    // 0x303b00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x303B00u;
    {
        const bool branch_taken_0x303b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303B00u;
            // 0x303b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b00) {
            ctx->pc = 0x303B0Cu;
            goto label_303b0c;
        }
    }
    ctx->pc = 0x303B08u;
    // 0x303b08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303b0c:
    // 0x303b0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_303b10:
    // 0x303b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x303B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303B1Cu;
            // 0x303b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303B24u;
}
