#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTranslate__10CEohMotherFiPf
// Address: 0x25eed0 - 0x25ef9c
void SetTranslate__10CEohMotherFiPf_0x25eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTranslate__10CEohMotherFiPf_0x25eed0");
#endif

    ctx->pc = 0x25eed0u;

    // 0x25eed0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EED0u;
    {
        const bool branch_taken_0x25eed0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EED0u;
            // 0x25eed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eed0) {
            ctx->pc = 0x25EEE8u;
            goto label_25eee8;
        }
    }
    ctx->pc = 0x25EED8u;
    // 0x25eed8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25eed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25eedc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EEDCu;
    {
        const bool branch_taken_0x25eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EEDCu;
            // 0x25eee0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eedc) {
            ctx->pc = 0x25EEF0u;
            goto label_25eef0;
        }
    }
    ctx->pc = 0x25EEE4u;
    // 0x25eee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25eee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eee8:
    // 0x25eee8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25EEE8u;
    {
        const bool branch_taken_0x25eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eee8) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EEF0u;
label_25eef0:
    // 0x25eef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25eef4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eef8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25eefc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25EEFCu;
    {
        const bool branch_taken_0x25eefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25eefc) {
            ctx->pc = 0x25EF60u;
            goto label_25ef60;
        }
    }
    ctx->pc = 0x25EF04u;
    // 0x25ef04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EF04u;
    {
        const bool branch_taken_0x25ef04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef04) {
            ctx->pc = 0x25EF14u;
            goto label_25ef14;
        }
    }
    ctx->pc = 0x25EF0Cu;
    // 0x25ef0c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25EF0Cu;
    {
        const bool branch_taken_0x25ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF0Cu;
            // 0x25ef10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef0c) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EF14u;
label_25ef14:
    // 0x25ef14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ef18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EF18u;
    {
        const bool branch_taken_0x25ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ef18) {
            ctx->pc = 0x25EF28u;
            goto label_25ef28;
        }
    }
    ctx->pc = 0x25EF20u;
    // 0x25ef20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25EF20u;
    {
        const bool branch_taken_0x25ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF20u;
            // 0x25ef24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef20) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EF28u;
label_25ef28:
    // 0x25ef28: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x25ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25ef2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EF2Cu;
    {
        const bool branch_taken_0x25ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF2Cu;
            // 0x25ef30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef2c) {
            ctx->pc = 0x25EF3Cu;
            goto label_25ef3c;
        }
    }
    ctx->pc = 0x25EF34u;
    // 0x25ef34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25EF34u;
    {
        const bool branch_taken_0x25ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef34) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EF3Cu;
label_25ef3c:
    // 0x25ef3c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ef44: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x25ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x25ef48: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef4c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x25ef4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x25ef50: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x25ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef54: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x25ef54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x25ef58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25EF58u;
    {
        const bool branch_taken_0x25ef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF58u;
            // 0x25ef5c: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef58) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EF60u;
label_25ef60:
    // 0x25ef60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ef64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EF64u;
    {
        const bool branch_taken_0x25ef64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EF64u;
            // 0x25ef68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef64) {
            ctx->pc = 0x25EF74u;
            goto label_25ef74;
        }
    }
    ctx->pc = 0x25EF6Cu;
    // 0x25ef6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25EF6Cu;
    {
        const bool branch_taken_0x25ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef6c) {
            ctx->pc = 0x25EF94u;
            goto label_25ef94;
        }
    }
    ctx->pc = 0x25EF74u;
label_25ef74:
    // 0x25ef74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ef7c: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x25ef7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x25ef80: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef84: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x25ef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x25ef88: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x25ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef8c: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x25ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x25ef90: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x25ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_25ef94:
    // 0x25ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x25EF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25EF9Cu;
}
