#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpdiv
// Address: 0x288eb0 - 0x289010
void fpdiv_0x288eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x288eb0");
#endif

    switch (ctx->pc) {
        case 0x288ed0u: goto label_288ed0;
        case 0x288ee0u: goto label_288ee0;
        case 0x288fa8u: goto label_288fa8;
        case 0x289000u: goto label_289000;
        default: break;
    }

    ctx->pc = 0x288eb0u;

    // 0x288eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288eb4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x288eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x288eb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x288eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288ebc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x288ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x288ec0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ec4: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x288ec4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x288ec8: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288EC8u;
    SET_GPR_U32(ctx, 31, 0x288ED0u);
    ctx->pc = 0x288ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288EC8u;
            // 0x288ecc: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288ED0u; }
        if (ctx->pc != 0x288ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288ED0u; }
        if (ctx->pc != 0x288ED0u) { return; }
    }
    ctx->pc = 0x288ED0u;
label_288ed0:
    // 0x288ed0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x288ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288ed4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x288ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x288ed8: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288ED8u;
    SET_GPR_U32(ctx, 31, 0x288EE0u);
    ctx->pc = 0x288EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288ED8u;
            // 0x288edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EE0u; }
        if (ctx->pc != 0x288EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288EE0u; }
        if (ctx->pc != 0x288EE0u) { return; }
    }
    ctx->pc = 0x288EE0u;
label_288ee0:
    // 0x288ee0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x288ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288ee4: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x288ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288EE8u;
    {
        const bool branch_taken_0x288ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EE8u;
            // 0x288eec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ee8) {
            ctx->pc = 0x288EF8u;
            goto label_288ef8;
        }
    }
    ctx->pc = 0x288EF0u;
    // 0x288ef0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x288EF0u;
    {
        const bool branch_taken_0x288ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EF0u;
            // 0x288ef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ef0) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288EF8u;
label_288ef8:
    // 0x288ef8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x288ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288efc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x288efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288f00: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x288F00u;
    {
        const bool branch_taken_0x288f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F00u;
            // 0x288f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f00) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288F08u;
    // 0x288f08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288f0c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x288f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x288f10: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x288f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x288f14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x288f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x288f18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288F18u;
    {
        const bool branch_taken_0x288f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F18u;
            // 0x288f1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f18) {
            ctx->pc = 0x288F2Cu;
            goto label_288f2c;
        }
    }
    ctx->pc = 0x288F20u;
    // 0x288f20: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x288f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x288f24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288F24u;
    {
        const bool branch_taken_0x288f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F24u;
            // 0x288f28: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f24) {
            ctx->pc = 0x288F40u;
            goto label_288f40;
        }
    }
    ctx->pc = 0x288F2Cu;
label_288f2c:
    // 0x288f2c: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x288F2Cu;
    {
        const bool branch_taken_0x288f2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x288F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F2Cu;
            // 0x288f30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f2c) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288F34u;
    // 0x288f34: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x288f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x288f38: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x288F38u;
    {
        const bool branch_taken_0x288f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F38u;
            // 0x288f3c: 0x24445218  addiu       $a0, $v0, 0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f38) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288F40u;
label_288f40:
    // 0x288f40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288F40u;
    {
        const bool branch_taken_0x288f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F40u;
            // 0x288f44: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f40) {
            ctx->pc = 0x288F58u;
            goto label_288f58;
        }
    }
    ctx->pc = 0x288F48u;
    // 0x288f48: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x288f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x288f4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x288F50u;
    {
        const bool branch_taken_0x288f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F50u;
            // 0x288f54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f50) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288F58u;
label_288f58:
    // 0x288f58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288F58u;
    {
        const bool branch_taken_0x288f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F58u;
            // 0x288f5c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f58) {
            ctx->pc = 0x288F70u;
            goto label_288f70;
        }
    }
    ctx->pc = 0x288F60u;
    // 0x288f60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x288f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288f64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f68: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x288F68u;
    {
        const bool branch_taken_0x288f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F68u;
            // 0x288f6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f68) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288F70u;
label_288f70:
    // 0x288f70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x288f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x288f74: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x288f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x288f78: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x288f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x288f7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x288f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288f80: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x288f80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x288f84: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x288F84u;
    {
        const bool branch_taken_0x288f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F84u;
            // 0x288f88: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f84) {
            ctx->pc = 0x288F9Cu;
            goto label_288f9c;
        }
    }
    ctx->pc = 0x288F8Cu;
    // 0x288f8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x288f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x288f90: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x288f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x288f94: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x288f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x288f98: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x288f98u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_288f9c:
    // 0x288f9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x288f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x288fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288FA0u;
    {
        const bool branch_taken_0x288fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FA0u;
            // 0x288fa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fa0) {
            ctx->pc = 0x288FACu;
            goto label_288fac;
        }
    }
    ctx->pc = 0x288FA8u;
label_288fa8:
    // 0x288fa8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_288fac:
    // 0x288fac: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x288FACu;
    {
        const bool branch_taken_0x288fac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x288fac) {
            ctx->pc = 0x288FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288FACu;
            // 0x288fb0: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288FC0u;
            goto label_288fc0;
        }
    }
    ctx->pc = 0x288FB4u;
    // 0x288fb4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x288fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x288fb8: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x288fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x288fbc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x288fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_288fc0:
    // 0x288fc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288FC0u;
    {
        const bool branch_taken_0x288fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FC0u;
            // 0x288fc4: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fc0) {
            ctx->pc = 0x288FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288fa8;
        }
    }
    ctx->pc = 0x288FC8u;
    // 0x288fc8: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x288fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x288fcc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x288fd0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288FD0u;
    {
        const bool branch_taken_0x288fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288fd0) {
            ctx->pc = 0x288FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288FD0u;
            // 0x288fd4: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288FF4u;
            goto label_288ff4;
        }
    }
    ctx->pc = 0x288FD8u;
    // 0x288fd8: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x288fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x288fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288FDCu;
    {
        const bool branch_taken_0x288fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FDCu;
            // 0x288fe0: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fdc) {
            ctx->pc = 0x288FECu;
            goto label_288fec;
        }
    }
    ctx->pc = 0x288FE4u;
    // 0x288fe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288FE4u;
    {
        const bool branch_taken_0x288fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FE4u;
            // 0x288fe8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fe4) {
            ctx->pc = 0x288FF0u;
            goto label_288ff0;
        }
    }
    ctx->pc = 0x288FECu;
label_288fec:
    // 0x288fec: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x288fecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_288ff0:
    // 0x288ff0: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x288ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_288ff4:
    // 0x288ff4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x288ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_288ff8:
    // 0x288ff8: 0xc0a2208  jal         func_288820
    ctx->pc = 0x288FF8u;
    SET_GPR_U32(ctx, 31, 0x289000u);
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289000u; }
        if (ctx->pc != 0x289000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289000u; }
        if (ctx->pc != 0x289000u) { return; }
    }
    ctx->pc = 0x289000u;
label_289000:
    // 0x289000: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x289000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289004: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x289004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289008: 0x3e00008  jr          $ra
    ctx->pc = 0x289008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289008u;
            // 0x28900c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289010u;
}
