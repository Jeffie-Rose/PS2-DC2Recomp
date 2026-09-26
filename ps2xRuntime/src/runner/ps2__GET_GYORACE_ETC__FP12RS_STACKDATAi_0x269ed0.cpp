#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_GYORACE_ETC__FP12RS_STACKDATAi
// Address: 0x269ed0 - 0x26a030
void ps2__GET_GYORACE_ETC__FP12RS_STACKDATAi_0x269ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_GYORACE_ETC__FP12RS_STACKDATAi_0x269ed0");
#endif

    switch (ctx->pc) {
        case 0x269ee8u: goto label_269ee8;
        case 0x269f14u: goto label_269f14;
        case 0x269f20u: goto label_269f20;
        case 0x269f30u: goto label_269f30;
        case 0x269f3cu: goto label_269f3c;
        case 0x269f4cu: goto label_269f4c;
        case 0x269f58u: goto label_269f58;
        case 0x269f68u: goto label_269f68;
        case 0x269f74u: goto label_269f74;
        case 0x269f88u: goto label_269f88;
        case 0x269f98u: goto label_269f98;
        case 0x269fa8u: goto label_269fa8;
        case 0x269fc8u: goto label_269fc8;
        case 0x269fd4u: goto label_269fd4;
        case 0x269fe4u: goto label_269fe4;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a008u: goto label_26a008;
        default: break;
    }

    ctx->pc = 0x269ed0u;

    // 0x269ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269ee0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269EE0u;
    SET_GPR_U32(ctx, 31, 0x269EE8u);
    ctx->pc = 0x269EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269EE0u;
            // 0x269ee4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EE8u; }
        if (ctx->pc != 0x269EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269EE8u; }
        if (ctx->pc != 0x269EE8u) { return; }
    }
    ctx->pc = 0x269EE8u;
label_269ee8:
    // 0x269ee8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x269ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x269eec: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x269EECu;
    {
        const bool branch_taken_0x269eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269EECu;
            // 0x269ef0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eec) {
            ctx->pc = 0x26A010u;
            goto label_26a010;
        }
    }
    ctx->pc = 0x269EF4u;
    // 0x269ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269ef8: 0x2463c8e0  addiu       $v1, $v1, -0x3720
    ctx->pc = 0x269ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953184));
    // 0x269efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269f04: 0x400008  jr          $v0
    ctx->pc = 0x269F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269F0Cu: goto label_269f0c;
            case 0x269F28u: goto label_269f28;
            case 0x269F44u: goto label_269f44;
            case 0x269F60u: goto label_269f60;
            case 0x269F7Cu: goto label_269f7c;
            case 0x269FDCu: goto label_269fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269F0Cu;
label_269f0c:
    // 0x269f0c: 0xc0865f8  jal         func_2197E0
    ctx->pc = 0x269F0Cu;
    SET_GPR_U32(ctx, 31, 0x269F14u);
    ctx->pc = 0x2197E0u;
    if (runtime->hasFunction(0x2197E0u)) {
        auto targetFn = runtime->lookupFunction(0x2197E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F14u; }
        if (ctx->pc != 0x269F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceAquariumNo__Fv_0x2197e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F14u; }
        if (ctx->pc != 0x269F14u) { return; }
    }
    ctx->pc = 0x269F14u;
label_269f14:
    // 0x269f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f18: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269F18u;
    SET_GPR_U32(ctx, 31, 0x269F20u);
    ctx->pc = 0x269F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F18u;
            // 0x269f1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F20u; }
        if (ctx->pc != 0x269F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F20u; }
        if (ctx->pc != 0x269F20u) { return; }
    }
    ctx->pc = 0x269F20u;
label_269f20:
    // 0x269f20: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x269F20u;
    {
        const bool branch_taken_0x269f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269F20u;
            // 0x269f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f20) {
            ctx->pc = 0x26A01Cu;
            goto label_26a01c;
        }
    }
    ctx->pc = 0x269F28u;
label_269f28:
    // 0x269f28: 0xc08665c  jal         func_219970
    ctx->pc = 0x269F28u;
    SET_GPR_U32(ctx, 31, 0x269F30u);
    ctx->pc = 0x219970u;
    if (runtime->hasFunction(0x219970u)) {
        auto targetFn = runtime->lookupFunction(0x219970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F30u; }
        if (ctx->pc != 0x269F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceRanking__Fv_0x219970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F30u; }
        if (ctx->pc != 0x269F30u) { return; }
    }
    ctx->pc = 0x269F30u;
label_269f30:
    // 0x269f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f34: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269F34u;
    SET_GPR_U32(ctx, 31, 0x269F3Cu);
    ctx->pc = 0x269F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F34u;
            // 0x269f38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F3Cu; }
        if (ctx->pc != 0x269F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F3Cu; }
        if (ctx->pc != 0x269F3Cu) { return; }
    }
    ctx->pc = 0x269F3Cu;
label_269f3c:
    // 0x269f3c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x269F3Cu;
    {
        const bool branch_taken_0x269f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f3c) {
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x269F44u;
label_269f44:
    // 0x269f44: 0xc086600  jal         func_219800
    ctx->pc = 0x269F44u;
    SET_GPR_U32(ctx, 31, 0x269F4Cu);
    ctx->pc = 0x219800u;
    if (runtime->hasFunction(0x219800u)) {
        auto targetFn = runtime->lookupFunction(0x219800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F4Cu; }
        if (ctx->pc != 0x269F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceClass__Fv_0x219800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F4Cu; }
        if (ctx->pc != 0x269F4Cu) { return; }
    }
    ctx->pc = 0x269F4Cu;
label_269f4c:
    // 0x269f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f50: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269F50u;
    SET_GPR_U32(ctx, 31, 0x269F58u);
    ctx->pc = 0x269F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F50u;
            // 0x269f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F58u; }
        if (ctx->pc != 0x269F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F58u; }
        if (ctx->pc != 0x269F58u) { return; }
    }
    ctx->pc = 0x269F58u;
label_269f58:
    // 0x269f58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x269F58u;
    {
        const bool branch_taken_0x269f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f58) {
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x269F60u;
label_269f60:
    // 0x269f60: 0xc08660c  jal         func_219830
    ctx->pc = 0x269F60u;
    SET_GPR_U32(ctx, 31, 0x269F68u);
    ctx->pc = 0x219830u;
    if (runtime->hasFunction(0x219830u)) {
        auto targetFn = runtime->lookupFunction(0x219830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F68u; }
        if (ctx->pc != 0x269F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceNo__Fv_0x219830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F68u; }
        if (ctx->pc != 0x269F68u) { return; }
    }
    ctx->pc = 0x269F68u;
label_269f68:
    // 0x269f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f6c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269F6Cu;
    SET_GPR_U32(ctx, 31, 0x269F74u);
    ctx->pc = 0x269F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F6Cu;
            // 0x269f70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F74u; }
        if (ctx->pc != 0x269F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F74u; }
        if (ctx->pc != 0x269F74u) { return; }
    }
    ctx->pc = 0x269F74u;
label_269f74:
    // 0x269f74: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x269F74u;
    {
        const bool branch_taken_0x269f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f74) {
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x269F7Cu;
label_269f7c:
    // 0x269f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269F80u;
    SET_GPR_U32(ctx, 31, 0x269F88u);
    ctx->pc = 0x269F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F80u;
            // 0x269f84: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F88u; }
        if (ctx->pc != 0x269F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F88u; }
        if (ctx->pc != 0x269F88u) { return; }
    }
    ctx->pc = 0x269F88u;
label_269f88:
    // 0x269f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f90: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269F90u;
    SET_GPR_U32(ctx, 31, 0x269F98u);
    ctx->pc = 0x269F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269F90u;
            // 0x269f94: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F98u; }
        if (ctx->pc != 0x269F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269F98u; }
        if (ctx->pc != 0x269F98u) { return; }
    }
    ctx->pc = 0x269F98u;
label_269f98:
    // 0x269f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f9c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x269fa0: 0xc086874  jal         func_21A1D0
    ctx->pc = 0x269FA0u;
    SET_GPR_U32(ctx, 31, 0x269FA8u);
    ctx->pc = 0x269FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FA0u;
            // 0x269fa4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A1D0u;
    if (runtime->hasFunction(0x21A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FA8u; }
        if (ctx->pc != 0x269FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishPrize__FiiP15FISH_PRIZE_INFO_0x21a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FA8u; }
        if (ctx->pc != 0x269FA8u) { return; }
    }
    ctx->pc = 0x269FA8u;
label_269fa8:
    // 0x269fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269FA8u;
    {
        const bool branch_taken_0x269fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FA8u;
            // 0x269fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fa8) {
            ctx->pc = 0x269FB8u;
            goto label_269fb8;
        }
    }
    ctx->pc = 0x269FB0u;
    // 0x269fb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x269FB0u;
    {
        const bool branch_taken_0x269fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FB0u;
            // 0x269fb4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fb0) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x269FB8u;
label_269fb8:
    // 0x269fb8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x269fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269fc0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269FC0u;
    SET_GPR_U32(ctx, 31, 0x269FC8u);
    ctx->pc = 0x269FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FC0u;
            // 0x269fc4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FC8u; }
        if (ctx->pc != 0x269FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FC8u; }
        if (ctx->pc != 0x269FC8u) { return; }
    }
    ctx->pc = 0x269FC8u;
label_269fc8:
    // 0x269fc8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x269fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x269fcc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269FCCu;
    SET_GPR_U32(ctx, 31, 0x269FD4u);
    ctx->pc = 0x269FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269FCCu;
            // 0x269fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FD4u; }
        if (ctx->pc != 0x269FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FD4u; }
        if (ctx->pc != 0x269FD4u) { return; }
    }
    ctx->pc = 0x269FD4u;
label_269fd4:
    // 0x269fd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269FD4u;
    {
        const bool branch_taken_0x269fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fd4) {
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x269FDCu;
label_269fdc:
    // 0x269fdc: 0xc064220  jal         func_190880
    ctx->pc = 0x269FDCu;
    SET_GPR_U32(ctx, 31, 0x269FE4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FE4u; }
        if (ctx->pc != 0x269FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FE4u; }
        if (ctx->pc != 0x269FE4u) { return; }
    }
    ctx->pc = 0x269FE4u;
label_269fe4:
    // 0x269fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269FE4u;
    {
        const bool branch_taken_0x269fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FE4u;
            // 0x269fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fe4) {
            ctx->pc = 0x269FF4u;
            goto label_269ff4;
        }
    }
    ctx->pc = 0x269FECu;
    // 0x269fec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269FECu;
    {
        const bool branch_taken_0x269fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FECu;
            // 0x269ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fec) {
            ctx->pc = 0x26A01Cu;
            goto label_26a01c;
        }
    }
    ctx->pc = 0x269FF4u;
label_269ff4:
    // 0x269ff4: 0xc0bdad8  jal         func_2F6B60
    ctx->pc = 0x269FF4u;
    SET_GPR_U32(ctx, 31, 0x269FFCu);
    ctx->pc = 0x2F6B60u;
    if (runtime->hasFunction(0x2F6B60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FFCu; }
        if (ctx->pc != 0x269FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTourCountEtc__9CSaveDataFv_0x2f6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269FFCu; }
        if (ctx->pc != 0x269FFCu) { return; }
    }
    ctx->pc = 0x269FFCu;
label_269ffc:
    // 0x269ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a000: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A000u;
    SET_GPR_U32(ctx, 31, 0x26A008u);
    ctx->pc = 0x26A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A000u;
            // 0x26a004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A008u; }
        if (ctx->pc != 0x26A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A008u; }
        if (ctx->pc != 0x26A008u) { return; }
    }
    ctx->pc = 0x26A008u;
label_26a008:
    // 0x26a008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A008u;
    {
        const bool branch_taken_0x26a008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a008) {
            ctx->pc = 0x26A018u;
            goto label_26a018;
        }
    }
    ctx->pc = 0x26A010u;
label_26a010:
    // 0x26a010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A010u;
    {
        const bool branch_taken_0x26a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A010u;
            // 0x26a014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a010) {
            ctx->pc = 0x26A01Cu;
            goto label_26a01c;
        }
    }
    ctx->pc = 0x26A018u;
label_26a018:
    // 0x26a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a01c:
    // 0x26a01c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26a020:
    // 0x26a020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a028: 0x3e00008  jr          $ra
    ctx->pc = 0x26A028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A028u;
            // 0x26a02c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A030u;
}
