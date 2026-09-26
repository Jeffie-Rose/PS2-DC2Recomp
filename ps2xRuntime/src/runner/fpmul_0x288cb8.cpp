#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpmul
// Address: 0x288cb8 - 0x288eac
void fpmul_0x288cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x288cb8");
#endif

    switch (ctx->pc) {
        case 0x288cd8u: goto label_288cd8;
        case 0x288ce8u: goto label_288ce8;
        case 0x288df0u: goto label_288df0;
        case 0x288e38u: goto label_288e38;
        case 0x288e9cu: goto label_288e9c;
        default: break;
    }

    ctx->pc = 0x288cb8u;

    // 0x288cb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288cbc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x288cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x288cc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288cc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288cc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ccc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x288cccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x288cd0: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288CD0u;
    SET_GPR_U32(ctx, 31, 0x288CD8u);
    ctx->pc = 0x288CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CD0u;
            // 0x288cd4: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CD8u; }
        if (ctx->pc != 0x288CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CD8u; }
        if (ctx->pc != 0x288CD8u) { return; }
    }
    ctx->pc = 0x288CD8u;
label_288cd8:
    // 0x288cd8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x288cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288cdc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x288cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x288ce0: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288CE0u;
    SET_GPR_U32(ctx, 31, 0x288CE8u);
    ctx->pc = 0x288CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CE0u;
            // 0x288ce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CE8u; }
        if (ctx->pc != 0x288CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CE8u; }
        if (ctx->pc != 0x288CE8u) { return; }
    }
    ctx->pc = 0x288CE8u;
label_288ce8:
    // 0x288ce8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288cec: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x288cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288cf0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x288CF0u;
    {
        const bool branch_taken_0x288cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288CF0u;
            // 0x288cf4: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cf0) {
            ctx->pc = 0x288D4Cu;
            goto label_288d4c;
        }
    }
    ctx->pc = 0x288CF8u;
    // 0x288cf8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x288cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288cfc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x288cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288d00: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x288D00u;
    {
        const bool branch_taken_0x288d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288d00) {
            ctx->pc = 0x288D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288D00u;
            // 0x288d04: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288D74u;
            goto label_288d74;
        }
    }
    ctx->pc = 0x288D08u;
    // 0x288d08: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x288d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x288d0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288D0Cu;
    {
        const bool branch_taken_0x288d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D0Cu;
            // 0x288d10: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d0c) {
            ctx->pc = 0x288D28u;
            goto label_288d28;
        }
    }
    ctx->pc = 0x288D14u;
    // 0x288d14: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x288d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x288d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288D18u;
    {
        const bool branch_taken_0x288d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D18u;
            // 0x288d1c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d18) {
            ctx->pc = 0x288D38u;
            goto label_288d38;
        }
    }
    ctx->pc = 0x288D20u;
    // 0x288d20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288D20u;
    {
        const bool branch_taken_0x288d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D20u;
            // 0x288d24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d20) {
            ctx->pc = 0x288D54u;
            goto label_288d54;
        }
    }
    ctx->pc = 0x288D28u;
label_288d28:
    // 0x288d28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288D28u;
    {
        const bool branch_taken_0x288d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D28u;
            // 0x288d2c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d28) {
            ctx->pc = 0x288D44u;
            goto label_288d44;
        }
    }
    ctx->pc = 0x288D30u;
    // 0x288d30: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288D30u;
    {
        const bool branch_taken_0x288d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D30u;
            // 0x288d34: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d30) {
            ctx->pc = 0x288D74u;
            goto label_288d74;
        }
    }
    ctx->pc = 0x288D38u;
label_288d38:
    // 0x288d38: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x288d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x288d3c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x288D3Cu;
    {
        const bool branch_taken_0x288d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D3Cu;
            // 0x288d40: 0x24445218  addiu       $a0, $v0, 0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d3c) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288D44u;
label_288d44:
    // 0x288d44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288D44u;
    {
        const bool branch_taken_0x288d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D44u;
            // 0x288d48: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d44) {
            ctx->pc = 0x288D68u;
            goto label_288d68;
        }
    }
    ctx->pc = 0x288D4Cu;
label_288d4c:
    // 0x288d4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288d50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_288d54:
    // 0x288d54: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x288d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x288d58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x288d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x288d5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288d60: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x288D60u;
    {
        const bool branch_taken_0x288d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D60u;
            // 0x288d64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d60) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288D68u;
label_288d68:
    // 0x288d68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288D68u;
    {
        const bool branch_taken_0x288d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D68u;
            // 0x288d6c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d68) {
            ctx->pc = 0x288D8Cu;
            goto label_288d8c;
        }
    }
    ctx->pc = 0x288D70u;
    // 0x288d70: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_288d74:
    // 0x288d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288d7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x288d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x288d80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288d84: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x288D84u;
    {
        const bool branch_taken_0x288d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D84u;
            // 0x288d88: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d84) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288D8Cu;
label_288d8c:
    // 0x288d8c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x288d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x288d90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x288d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288d94: 0x820019  multu       $a0, $v0
    ctx->pc = 0x288d94u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d98: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x288d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x288d9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288da0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x288da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x288da4: 0x2812  mflo        $a1
    ctx->pc = 0x288da4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x288da8: 0x2010  mfhi        $a0
    ctx->pc = 0x288da8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x288dac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x288dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x288db0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x288db4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x288db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x288db8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x288db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288dbc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x288dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x288dc0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x288dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x288dc4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x288dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x288dc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x288dcc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x288dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x288dd0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x288dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x288dd4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x288dd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x288dd8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x288dd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x288ddc: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x288DDCu;
    {
        const bool branch_taken_0x288ddc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x288DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288DDCu;
            // 0x288de0: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ddc) {
            ctx->pc = 0x288E10u;
            goto label_288e10;
        }
    }
    ctx->pc = 0x288DE4u;
    // 0x288de4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x288de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x288de8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x288de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x288dec: 0x0  nop
    ctx->pc = 0x288decu;
    // NOP
label_288df0:
    // 0x288df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288DF0u;
    {
        const bool branch_taken_0x288df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288DF0u;
            // 0x288df4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288df0) {
            ctx->pc = 0x288E00u;
            goto label_288e00;
        }
    }
    ctx->pc = 0x288DF8u;
    // 0x288df8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x288dfc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x288dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_288e00:
    // 0x288e00: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x288e04: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288E04u;
    {
        const bool branch_taken_0x288e04 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x288E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E04u;
            // 0x288e08: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e04) {
            ctx->pc = 0x288DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288df0;
        }
    }
    ctx->pc = 0x288E0Cu;
    // 0x288e0c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x288e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_288e10:
    // 0x288e10: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x288e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x288e14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288e18: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x288e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x288e1c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288E1Cu;
    {
        const bool branch_taken_0x288e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E1Cu;
            // 0x288e20: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e1c) {
            ctx->pc = 0x288E60u;
            goto label_288e60;
        }
    }
    ctx->pc = 0x288E24u;
    // 0x288e24: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x288e24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x288e28: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x288e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x288e2c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x288e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x288e30: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x288e30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x288e34: 0x0  nop
    ctx->pc = 0x288e34u;
    // NOP
label_288e38:
    // 0x288e38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x288e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x288e3c: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x288e40: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x288e44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x288e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x288e48: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x288e48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
    // 0x288e4c: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x288e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x288e50: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288E50u;
    {
        const bool branch_taken_0x288e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E50u;
            // 0x288e54: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e50) {
            ctx->pc = 0x288E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288e38;
        }
    }
    ctx->pc = 0x288E58u;
    // 0x288e58: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x288e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x288e5c: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_288e60:
    // 0x288e60: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x288e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x288e64: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288E64u;
    {
        const bool branch_taken_0x288e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288e64) {
            ctx->pc = 0x288E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288E64u;
            // 0x288e68: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288E88u;
            goto label_288e88;
        }
    }
    ctx->pc = 0x288E6Cu;
    // 0x288e6c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x288e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x288e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288E70u;
    {
        const bool branch_taken_0x288e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E70u;
            // 0x288e74: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e70) {
            ctx->pc = 0x288E80u;
            goto label_288e80;
        }
    }
    ctx->pc = 0x288E78u;
    // 0x288e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288E78u;
    {
        const bool branch_taken_0x288e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E78u;
            // 0x288e7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e78) {
            ctx->pc = 0x288E84u;
            goto label_288e84;
        }
    }
    ctx->pc = 0x288E80u;
label_288e80:
    // 0x288e80: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x288e80u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_288e84:
    // 0x288e84: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x288e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_288e88:
    // 0x288e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288e8c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x288e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x288e90: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x288e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_288e94:
    // 0x288e94: 0xc0a2208  jal         func_288820
    ctx->pc = 0x288E94u;
    SET_GPR_U32(ctx, 31, 0x288E9Cu);
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E9Cu; }
        if (ctx->pc != 0x288E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E9Cu; }
        if (ctx->pc != 0x288E9Cu) { return; }
    }
    ctx->pc = 0x288E9Cu;
label_288e9c:
    // 0x288e9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x288e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288ea0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x288ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x288EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EA4u;
            // 0x288ea8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288EACu;
}
