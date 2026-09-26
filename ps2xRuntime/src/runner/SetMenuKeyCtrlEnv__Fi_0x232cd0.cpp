#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuKeyCtrlEnv__Fi
// Address: 0x232cd0 - 0x232d74
void SetMenuKeyCtrlEnv__Fi_0x232cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuKeyCtrlEnv__Fi_0x232cd0");
#endif

    switch (ctx->pc) {
        case 0x232cecu: goto label_232cec;
        case 0x232cf8u: goto label_232cf8;
        case 0x232d18u: goto label_232d18;
        case 0x232d28u: goto label_232d28;
        case 0x232d54u: goto label_232d54;
        case 0x232d64u: goto label_232d64;
        default: break;
    }

    ctx->pc = 0x232cd0u;

    // 0x232cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ce0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x232ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x232ce4: 0xc052d40  jal         func_14B500
    ctx->pc = 0x232CE4u;
    SET_GPR_U32(ctx, 31, 0x232CECu);
    ctx->pc = 0x232CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CE4u;
            // 0x232ce8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CECu; }
        if (ctx->pc != 0x232CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CECu; }
        if (ctx->pc != 0x232CECu) { return; }
    }
    ctx->pc = 0x232CECu;
label_232cec:
    // 0x232cec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x232cf0: 0xc052d48  jal         func_14B520
    ctx->pc = 0x232CF0u;
    SET_GPR_U32(ctx, 31, 0x232CF8u);
    ctx->pc = 0x232CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CF0u;
            // 0x232cf4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CF8u; }
        if (ctx->pc != 0x232CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CF8u; }
        if (ctx->pc != 0x232CF8u) { return; }
    }
    ctx->pc = 0x232CF8u;
label_232cf8:
    // 0x232cf8: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x232CF8u;
    {
        const bool branch_taken_0x232cf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x232CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CF8u;
            // 0x232cfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cf8) {
            ctx->pc = 0x232D30u;
            goto label_232d30;
        }
    }
    ctx->pc = 0x232D00u;
    // 0x232d00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x232d04: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x232d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x232d08: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x232d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x232d0c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232d10: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x232D10u;
    SET_GPR_U32(ctx, 31, 0x232D18u);
    ctx->pc = 0x232D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232D10u;
            // 0x232d14: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D18u; }
        if (ctx->pc != 0x232D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D18u; }
        if (ctx->pc != 0x232D18u) { return; }
    }
    ctx->pc = 0x232D18u;
label_232d18:
    // 0x232d18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x232d1c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x232d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x232d20: 0xc052d44  jal         func_14B510
    ctx->pc = 0x232D20u;
    SET_GPR_U32(ctx, 31, 0x232D28u);
    ctx->pc = 0x232D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232D20u;
            // 0x232d24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D28u; }
        if (ctx->pc != 0x232D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D28u; }
        if (ctx->pc != 0x232D28u) { return; }
    }
    ctx->pc = 0x232D28u;
label_232d28:
    // 0x232d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x232D28u;
    {
        const bool branch_taken_0x232d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D28u;
            // 0x232d2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d28) {
            ctx->pc = 0x232D68u;
            goto label_232d68;
        }
    }
    ctx->pc = 0x232D30u;
label_232d30:
    // 0x232d30: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x232D30u;
    {
        const bool branch_taken_0x232d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x232D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D30u;
            // 0x232d34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d30) {
            ctx->pc = 0x232D64u;
            goto label_232d64;
        }
    }
    ctx->pc = 0x232D38u;
    // 0x232d38: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x232D38u;
    {
        const bool branch_taken_0x232d38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x232D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D38u;
            // 0x232d3c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d38) {
            ctx->pc = 0x232D64u;
            goto label_232d64;
        }
    }
    ctx->pc = 0x232D40u;
    // 0x232d40: 0x3405f00c  ori         $a1, $zero, 0xF00C
    ctx->pc = 0x232d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61452);
    // 0x232d44: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x232d48: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232d4c: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x232D4Cu;
    SET_GPR_U32(ctx, 31, 0x232D54u);
    ctx->pc = 0x232D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232D4Cu;
            // 0x232d50: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D54u; }
        if (ctx->pc != 0x232D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D54u; }
        if (ctx->pc != 0x232D54u) { return; }
    }
    ctx->pc = 0x232D54u;
label_232d54:
    // 0x232d54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x232d58: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x232d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x232d5c: 0xc052d44  jal         func_14B510
    ctx->pc = 0x232D5Cu;
    SET_GPR_U32(ctx, 31, 0x232D64u);
    ctx->pc = 0x232D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232D5Cu;
            // 0x232d60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D64u; }
        if (ctx->pc != 0x232D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D64u; }
        if (ctx->pc != 0x232D64u) { return; }
    }
    ctx->pc = 0x232D64u;
label_232d64:
    // 0x232d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232d68:
    // 0x232d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x232D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D6Cu;
            // 0x232d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232D74u;
}
