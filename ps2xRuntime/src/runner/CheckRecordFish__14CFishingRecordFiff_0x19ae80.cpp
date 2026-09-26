#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRecordFish__14CFishingRecordFiff
// Address: 0x19ae80 - 0x19af2c
void CheckRecordFish__14CFishingRecordFiff_0x19ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRecordFish__14CFishingRecordFiff_0x19ae80");
#endif

    switch (ctx->pc) {
        case 0x19ae9cu: goto label_19ae9c;
        default: break;
    }

    ctx->pc = 0x19ae80u;

    // 0x19ae80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ae84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ae88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19ae88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ae8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19ae8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ae90: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19ae90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19ae94: 0xc066b90  jal         func_19AE40
    ctx->pc = 0x19AE94u;
    SET_GPR_U32(ctx, 31, 0x19AE9Cu);
    ctx->pc = 0x19AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE94u;
            // 0x19ae98: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AE40u;
    if (runtime->hasFunction(0x19AE40u)) {
        auto targetFn = runtime->lookupFunction(0x19AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE9Cu; }
        if (ctx->pc != 0x19AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishRecord__14CFishingRecordFi_0x19ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE9Cu; }
        if (ctx->pc != 0x19AE9Cu) { return; }
    }
    ctx->pc = 0x19AE9Cu;
label_19ae9c:
    // 0x19ae9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AE9Cu;
    {
        const bool branch_taken_0x19ae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae9c) {
            ctx->pc = 0x19AEACu;
            goto label_19aeac;
        }
    }
    ctx->pc = 0x19AEA4u;
    // 0x19aea4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19AEA4u;
    {
        const bool branch_taken_0x19aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEA4u;
            // 0x19aea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea4) {
            ctx->pc = 0x19AF18u;
            goto label_19af18;
        }
    }
    ctx->pc = 0x19AEACu;
label_19aeac:
    // 0x19aeac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aeb0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x19aeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aeb4: 0x0  nop
    ctx->pc = 0x19aeb4u;
    // NOP
    // 0x19aeb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19AEB8u;
    {
        const bool branch_taken_0x19aeb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEB8u;
            // 0x19aebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aeb8) {
            ctx->pc = 0x19AECCu;
            goto label_19aecc;
        }
    }
    ctx->pc = 0x19AEC0u;
    // 0x19aec0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19aec4: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x19aec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x19aec8: 0xe4550000  swc1        $f21, 0x0($v0)
    ctx->pc = 0x19aec8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_19aecc:
    // 0x19aecc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aed0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x19aed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aed4: 0x0  nop
    ctx->pc = 0x19aed4u;
    // NOP
    // 0x19aed8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19AED8u;
    {
        const bool branch_taken_0x19aed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aed8) {
            ctx->pc = 0x19AEECu;
            goto label_19aeec;
        }
    }
    ctx->pc = 0x19AEE0u;
    // 0x19aee0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19aee4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x19aee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x19aee8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x19aee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_19aeec:
    // 0x19aeec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x19aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19aef0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19aef4: 0x3466423f  ori         $a2, $v1, 0x423F
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16959);
    // 0x19aef8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aefc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19af00: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19af04: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x19af04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19af08: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AF08u;
    {
        const bool branch_taken_0x19af08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af08) {
            ctx->pc = 0x19AF14u;
            goto label_19af14;
        }
    }
    ctx->pc = 0x19AF10u;
    // 0x19af10: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x19af10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_19af14:
    // 0x19af14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19af14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19af18:
    // 0x19af18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19af1c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19af20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19af24: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF24u;
            // 0x19af28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AF2Cu;
}
