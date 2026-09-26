#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _b2d
// Address: 0x127ed8 - 0x128054
void _b2d_0x127ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_b2d_0x127ed8");
#endif

    switch (ctx->pc) {
        case 0x127f18u: goto label_127f18;
        default: break;
    }

    ctx->pc = 0x127ed8u;

    // 0x127ed8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127edc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x127edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x127ee0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x127ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x127ee4: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x127ee8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x127ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x127eec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x127eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x127ef0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ef4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x127ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x127ef8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x127ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x127efc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127f04: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x127f08: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x127f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x127f0c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x127f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127f10: 0xc049d88  jal         func_127620
    ctx->pc = 0x127F10u;
    SET_GPR_U32(ctx, 31, 0x127F18u);
    ctx->pc = 0x127F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127F10u;
            // 0x127f14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127620u;
    if (runtime->hasFunction(0x127620u)) {
        auto targetFn = runtime->lookupFunction(0x127620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127F18u; }
        if (ctx->pc != 0x127F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x127620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127F18u; }
        if (ctx->pc != 0x127F18u) { return; }
    }
    ctx->pc = 0x127F18u;
label_127f18:
    // 0x127f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x127f20: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x127f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x127f24: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x127f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x127f28: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x127F28u;
    {
        const bool branch_taken_0x127f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F28u;
            // 0x127f2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f28) {
            ctx->pc = 0x127F94u;
            goto label_127f94;
        }
    }
    ctx->pc = 0x127F30u;
    // 0x127f30: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127f34: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x127f38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x127f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x127f3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x127f40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x127f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x127f44: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x127f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x127f48: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x127f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x127f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127f50: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x127f50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127f54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127f58: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x127f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x127f5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x127F5Cu;
    {
        const bool branch_taken_0x127f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F5Cu;
            // 0x127f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f5c) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127F64u;
    // 0x127f64: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x127f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_127f68:
    // 0x127f68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x127f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127f6c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x127f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x127f70: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x127f74: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x127f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x127f78: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x127f7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127f80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127f84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x127f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x127f88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x127f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x127f8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127F8Cu;
    {
        const bool branch_taken_0x127f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F8Cu;
            // 0x127f90: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f8c) {
            ctx->pc = 0x12800Cu;
            goto label_12800c;
        }
    }
    ctx->pc = 0x127F94u;
label_127f94:
    // 0x127f94: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x127f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127F98u;
    {
        const bool branch_taken_0x127f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F98u;
            // 0x127f9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f98) {
            ctx->pc = 0x127FA8u;
            goto label_127fa8;
        }
    }
    ctx->pc = 0x127FA0u;
    // 0x127fa0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x127fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x127fa4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127fa8:
    // 0x127fa8: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x127fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x127fac: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x127FACu;
    {
        const bool branch_taken_0x127fac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FACu;
            // 0x127fb0: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fac) {
            ctx->pc = 0x128018u;
            goto label_128018;
        }
    }
    ctx->pc = 0x127FB4u;
    // 0x127fb4: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x127fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x127fb8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x127fbc: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x127fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x127fc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x127fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127fc4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x127fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x127fc8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x127fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x127fcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127fd0: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x127fd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x127fd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x127fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x127fd8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x127fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127fdc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x127fdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x127fe0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x127FE0u;
    {
        const bool branch_taken_0x127fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FE0u;
            // 0x127fe4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fe0) {
            ctx->pc = 0x127FECu;
            goto label_127fec;
        }
    }
    ctx->pc = 0x127FE8u;
    // 0x127fe8: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x127fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_127fec:
    // 0x127fec: 0x61023  negu        $v0, $a2
    ctx->pc = 0x127fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x127ff0: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x127ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x127ff4: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x127ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x127ff8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127ffc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x127ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x128000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x128000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128004: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x128004u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x128008: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x128008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12800c:
    // 0x12800c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x128010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128010u;
    {
        const bool branch_taken_0x128010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128010u;
            // 0x128014: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128010) {
            ctx->pc = 0x128030u;
            goto label_128030;
        }
    }
    ctx->pc = 0x128018u;
label_128018:
    // 0x128018: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x128018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x12801c: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x12801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x128020: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x128020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x128024: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x128028: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x128028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12802c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12802cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_128030:
    // 0x128030: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x128030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128034: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128038: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x128038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12803c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x12803cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128040: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x128040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128044: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x128044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128048: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12804c: 0x3e00008  jr          $ra
    ctx->pc = 0x12804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12804Cu;
            // 0x128050: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128054u;
}
