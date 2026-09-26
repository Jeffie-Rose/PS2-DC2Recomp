#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _V_POP2__FP12RS_STACKDATAi
// Address: 0x1e3030 - 0x1e311c
void ps2__V_POP2__FP12RS_STACKDATAi_0x1e3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__V_POP2__FP12RS_STACKDATAi_0x1e3030");
#endif

    switch (ctx->pc) {
        case 0x1e3054u: goto label_1e3054;
        case 0x1e30b0u: goto label_1e30b0;
        case 0x1e30f0u: goto label_1e30f0;
        default: break;
    }

    ctx->pc = 0x1e3030u;

    // 0x1e3030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e303c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E303Cu;
    {
        const bool branch_taken_0x1e303c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E303Cu;
            // 0x1e3040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e303c) {
            ctx->pc = 0x1E304Cu;
            goto label_1e304c;
        }
    }
    ctx->pc = 0x1E3044u;
    // 0x1e3044: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E3044u;
    {
        const bool branch_taken_0x1e3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3044u;
            // 0x1e3048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3044) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E304Cu;
label_1e304c:
    // 0x1e304c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E304Cu;
    SET_GPR_U32(ctx, 31, 0x1E3054u);
    ctx->pc = 0x1E3050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E304Cu;
            // 0x1e3050: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3054u; }
        if (ctx->pc != 0x1E3054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3054u; }
        if (ctx->pc != 0x1E3054u) { return; }
    }
    ctx->pc = 0x1E3054u;
label_1e3054:
    // 0x1e3054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3054u;
    {
        const bool branch_taken_0x1e3054 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e3054) {
            ctx->pc = 0x1E3064u;
            goto label_1e3064;
        }
    }
    ctx->pc = 0x1E305Cu;
    // 0x1e305c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E305Cu;
    {
        const bool branch_taken_0x1e305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E305Cu;
            // 0x1e3060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e305c) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E3064u;
label_1e3064:
    // 0x1e3064: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e3064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e3068: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e306c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E306Cu;
    {
        const bool branch_taken_0x1e306c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e306c) {
            ctx->pc = 0x1E307Cu;
            goto label_1e307c;
        }
    }
    ctx->pc = 0x1E3074u;
    // 0x1e3074: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E3074u;
    {
        const bool branch_taken_0x1e3074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3074u;
            // 0x1e3078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3074) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E307Cu;
label_1e307c:
    // 0x1e307c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e3080: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3084: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3084u;
    {
        const bool branch_taken_0x1e3084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3084u;
            // 0x1e3088: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3084) {
            ctx->pc = 0x1E30C8u;
            goto label_1e30c8;
        }
    }
    ctx->pc = 0x1E308Cu;
    // 0x1e308c: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x1e308cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e3090: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3090u;
    {
        const bool branch_taken_0x1e3090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3090) {
            ctx->pc = 0x1E30B8u;
            goto label_1e30b8;
        }
    }
    ctx->pc = 0x1E3098u;
    // 0x1e3098: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e309c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e309cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e30a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e30a4: 0x8c45117c  lw          $a1, 0x117C($v0)
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4476)));
    // 0x1e30a8: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E30A8u;
    SET_GPR_U32(ctx, 31, 0x1E30B0u);
    ctx->pc = 0x1E30ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30A8u;
            // 0x1e30ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30B0u; }
        if (ctx->pc != 0x1E30B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30B0u; }
        if (ctx->pc != 0x1E30B0u) { return; }
    }
    ctx->pc = 0x1E30B0u;
label_1e30b0:
    // 0x1e30b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E30B0u;
    {
        const bool branch_taken_0x1e30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30B0u;
            // 0x1e30b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30b0) {
            ctx->pc = 0x1E30C0u;
            goto label_1e30c0;
        }
    }
    ctx->pc = 0x1E30B8u;
label_1e30b8:
    // 0x1e30b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E30B8u;
    {
        const bool branch_taken_0x1e30b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30B8u;
            // 0x1e30bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30b8) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E30C0u;
label_1e30c0:
    // 0x1e30c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E30C0u;
    {
        const bool branch_taken_0x1e30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30C0u;
            // 0x1e30c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30c0) {
            ctx->pc = 0x1E3110u;
            goto label_1e3110;
        }
    }
    ctx->pc = 0x1E30C8u;
label_1e30c8:
    // 0x1e30c8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E30C8u;
    {
        const bool branch_taken_0x1e30c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E30CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30C8u;
            // 0x1e30cc: 0x28410020  slti        $at, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30c8) {
            ctx->pc = 0x1E3108u;
            goto label_1e3108;
        }
    }
    ctx->pc = 0x1E30D0u;
    // 0x1e30d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E30D0u;
    {
        const bool branch_taken_0x1e30d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e30d0) {
            ctx->pc = 0x1E30F8u;
            goto label_1e30f8;
        }
    }
    ctx->pc = 0x1E30D8u;
    // 0x1e30d8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e30d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e30dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e30e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e30e4: 0xc44c117c  lwc1        $f12, 0x117C($v0)
    ctx->pc = 0x1e30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e30e8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E30E8u;
    SET_GPR_U32(ctx, 31, 0x1E30F0u);
    ctx->pc = 0x1E30ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30E8u;
            // 0x1e30ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30F0u; }
        if (ctx->pc != 0x1E30F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30F0u; }
        if (ctx->pc != 0x1E30F0u) { return; }
    }
    ctx->pc = 0x1E30F0u;
label_1e30f0:
    // 0x1e30f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E30F0u;
    {
        const bool branch_taken_0x1e30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30F0u;
            // 0x1e30f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30f0) {
            ctx->pc = 0x1E3100u;
            goto label_1e3100;
        }
    }
    ctx->pc = 0x1E30F8u;
label_1e30f8:
    // 0x1e30f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E30F8u;
    {
        const bool branch_taken_0x1e30f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30F8u;
            // 0x1e30fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30f8) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E3100u;
label_1e3100:
    // 0x1e3100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3100u;
    {
        const bool branch_taken_0x1e3100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3100) {
            ctx->pc = 0x1E310Cu;
            goto label_1e310c;
        }
    }
    ctx->pc = 0x1E3108u;
label_1e3108:
    // 0x1e3108: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e3108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e310c:
    // 0x1e310c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3110:
    // 0x1e3110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3114: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3114u;
            // 0x1e3118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E311Cu;
}
