#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i
// Address: 0x285ce0 - 0x285db0
void LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0");
#endif

    switch (ctx->pc) {
        case 0x285d10u: goto label_285d10;
        case 0x285d1cu: goto label_285d1c;
        case 0x285d28u: goto label_285d28;
        case 0x285d44u: goto label_285d44;
        case 0x285d58u: goto label_285d58;
        case 0x285d74u: goto label_285d74;
        case 0x285d88u: goto label_285d88;
        default: break;
    }

    ctx->pc = 0x285ce0u;

    // 0x285ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x285ce4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x285ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x285ce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285cf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x285cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x285cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285d00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x285d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d04: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x285d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x285d08: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x285D08u;
    SET_GPR_U32(ctx, 31, 0x285D10u);
    ctx->pc = 0x285D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D08u;
            // 0x285d0c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D10u; }
        if (ctx->pc != 0x285D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D10u; }
        if (ctx->pc != 0x285D10u) { return; }
    }
    ctx->pc = 0x285D10u;
label_285d10:
    // 0x285d10: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x285d14: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x285D14u;
    SET_GPR_U32(ctx, 31, 0x285D1Cu);
    ctx->pc = 0x285D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D14u;
            // 0x285d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D1Cu; }
        if (ctx->pc != 0x285D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D1Cu; }
        if (ctx->pc != 0x285D1Cu) { return; }
    }
    ctx->pc = 0x285D1Cu;
label_285d1c:
    // 0x285d1c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x285d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x285d20: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x285D20u;
    SET_GPR_U32(ctx, 31, 0x285D28u);
    ctx->pc = 0x285D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D20u;
            // 0x285d24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D28u; }
        if (ctx->pc != 0x285D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D28u; }
        if (ctx->pc != 0x285D28u) { return; }
    }
    ctx->pc = 0x285D28u;
label_285d28:
    // 0x285d28: 0xae2201a4  sw          $v0, 0x1A4($s1)
    ctx->pc = 0x285d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
    // 0x285d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d30: 0xae25019c  sw          $a1, 0x19C($s1)
    ctx->pc = 0x285d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 412), GPR_U32(ctx, 5));
    // 0x285d34: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x285D34u;
    {
        const bool branch_taken_0x285d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D34u;
            // 0x285d38: 0xae3201a0  sw          $s2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d34) {
            ctx->pc = 0x285D68u;
            goto label_285d68;
        }
    }
    ctx->pc = 0x285D3Cu;
    // 0x285d3c: 0xc0a12e8  jal         func_284BA0
    ctx->pc = 0x285D3Cu;
    SET_GPR_U32(ctx, 31, 0x285D44u);
    ctx->pc = 0x285D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D3Cu;
            // 0x285d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284BA0u;
    if (runtime->hasFunction(0x284BA0u)) {
        auto targetFn = runtime->lookupFunction(0x284BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D44u; }
        if (ctx->pc != 0x285D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapData__FR17SCN_LOADMAP_INFO2i_0x284ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D44u; }
        if (ctx->pc != 0x285D44u) { return; }
    }
    ctx->pc = 0x285D44u;
label_285d44:
    // 0x285d44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x285D44u;
    {
        const bool branch_taken_0x285d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D44u;
            // 0x285d48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d44) {
            ctx->pc = 0x285D94u;
            goto label_285d94;
        }
    }
    ctx->pc = 0x285D4Cu;
    // 0x285d4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d50: 0xc0a176c  jal         func_285DB0
    ctx->pc = 0x285D50u;
    SET_GPR_U32(ctx, 31, 0x285D58u);
    ctx->pc = 0x285D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D50u;
            // 0x285d54: 0x26642ca8  addiu       $a0, $s3, 0x2CA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285DB0u;
    if (runtime->hasFunction(0x285DB0u)) {
        auto targetFn = runtime->lookupFunction(0x285DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D58u; }
        if (ctx->pc != 0x285D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__17SCN_LOADMAP_INFO2FRC17SCN_LOADMAP_INFO2_0x285db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D58u; }
        if (ctx->pc != 0x285D58u) { return; }
    }
    ctx->pc = 0x285D58u;
label_285d58:
    // 0x285d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x285D60u;
    {
        const bool branch_taken_0x285d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D60u;
            // 0x285d64: 0xae632ca0  sw          $v1, 0x2CA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d60) {
            ctx->pc = 0x285D94u;
            goto label_285d94;
        }
    }
    ctx->pc = 0x285D68u;
label_285d68:
    // 0x285d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d6c: 0xc0a12e8  jal         func_284BA0
    ctx->pc = 0x285D6Cu;
    SET_GPR_U32(ctx, 31, 0x285D74u);
    ctx->pc = 0x285D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D6Cu;
            // 0x285d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284BA0u;
    if (runtime->hasFunction(0x284BA0u)) {
        auto targetFn = runtime->lookupFunction(0x284BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D74u; }
        if (ctx->pc != 0x285D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapData__FR17SCN_LOADMAP_INFO2i_0x284ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D74u; }
        if (ctx->pc != 0x285D74u) { return; }
    }
    ctx->pc = 0x285D74u;
label_285d74:
    // 0x285d74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285D74u;
    {
        const bool branch_taken_0x285d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D74u;
            // 0x285d78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d74) {
            ctx->pc = 0x285D90u;
            goto label_285d90;
        }
    }
    ctx->pc = 0x285D7Cu;
    // 0x285d7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x285d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d80: 0xc0a159c  jal         func_285670
    ctx->pc = 0x285D80u;
    SET_GPR_U32(ctx, 31, 0x285D88u);
    ctx->pc = 0x285D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D80u;
            // 0x285d84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285670u;
    if (runtime->hasFunction(0x285670u)) {
        auto targetFn = runtime->lookupFunction(0x285670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D88u; }
        if (ctx->pc != 0x285D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapFromMemory__6CSceneFiP17SCN_LOADMAP_INFO2_0x285670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D88u; }
        if (ctx->pc != 0x285D88u) { return; }
    }
    ctx->pc = 0x285D88u;
label_285d88:
    // 0x285d88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285D88u;
    {
        const bool branch_taken_0x285d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D88u;
            // 0x285d8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d88) {
            ctx->pc = 0x285D98u;
            goto label_285d98;
        }
    }
    ctx->pc = 0x285D90u;
label_285d90:
    // 0x285d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x285d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_285d94:
    // 0x285d94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x285d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285d98:
    // 0x285d98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285d9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285da8: 0x3e00008  jr          $ra
    ctx->pc = 0x285DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DA8u;
            // 0x285dac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285DB0u;
}
