#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__6CSoundFiiii
// Address: 0x188e60 - 0x1895dc
void Init__6CSoundFiiii_0x188e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6CSoundFiiii_0x188e60");
#endif

    switch (ctx->pc) {
        case 0x188eb4u: goto label_188eb4;
        case 0x188ebcu: goto label_188ebc;
        case 0x188ec4u: goto label_188ec4;
        case 0x188ed8u: goto label_188ed8;
        case 0x188ee4u: goto label_188ee4;
        case 0x188eecu: goto label_188eec;
        case 0x188efcu: goto label_188efc;
        case 0x188f1cu: goto label_188f1c;
        case 0x188f38u: goto label_188f38;
        case 0x188fb8u: goto label_188fb8;
        case 0x189090u: goto label_189090;
        case 0x1890ccu: goto label_1890cc;
        case 0x1890dcu: goto label_1890dc;
        case 0x1890fcu: goto label_1890fc;
        case 0x189114u: goto label_189114;
        case 0x189158u: goto label_189158;
        case 0x1891a0u: goto label_1891a0;
        case 0x1891e0u: goto label_1891e0;
        case 0x18920cu: goto label_18920c;
        case 0x189250u: goto label_189250;
        default: break;
    }

    ctx->pc = 0x188e60u;

    // 0x188e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x188e68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188e70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x188e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188e78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x188e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188e80: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x188e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e84: 0x83828a8c  lb          $v0, -0x7574($gp)
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937228)));
    // 0x188e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188E88u;
    {
        const bool branch_taken_0x188e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188E88u;
            // 0x188e8c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e88) {
            ctx->pc = 0x188E9Cu;
            goto label_188e9c;
        }
    }
    ctx->pc = 0x188E90u;
    // 0x188e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e94: 0xaf808a88  sw          $zero, -0x7578($gp)
    ctx->pc = 0x188e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U32(ctx, 0));
    // 0x188e98: 0xa3828a8c  sb          $v0, -0x7574($gp)
    ctx->pc = 0x188e98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937228), (uint8_t)GPR_U32(ctx, 2));
label_188e9c:
    // 0x188e9c: 0x8f828a70  lw          $v0, -0x7590($gp)
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937200)));
    // 0x188ea0: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x188EA0u;
    {
        const bool branch_taken_0x188ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188EA0u;
            // 0x188ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ea0) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x188EA8u;
    // 0x188ea8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188eac: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188EACu;
    SET_GPR_U32(ctx, 31, 0x188EB4u);
    ctx->pc = 0x188EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188EACu;
            // 0x188eb0: 0x24844630  addiu       $a0, $a0, 0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EB4u; }
        if (ctx->pc != 0x188EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EB4u; }
        if (ctx->pc != 0x188EB4u) { return; }
    }
    ctx->pc = 0x188EB4u;
label_188eb4:
    // 0x188eb4: 0xc0a2b60  jal         func_28AD80
    ctx->pc = 0x188EB4u;
    SET_GPR_U32(ctx, 31, 0x188EBCu);
    ctx->pc = 0x28AD80u;
    if (runtime->hasFunction(0x28AD80u)) {
        auto targetFn = runtime->lookupFunction(0x28AD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EBCu; }
        if (ctx->pc != 0x188EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgmInit__Fv_0x28ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EBCu; }
        if (ctx->pc != 0x188EBCu) { return; }
    }
    ctx->pc = 0x188EBCu;
label_188ebc:
    // 0x188ebc: 0xc062c70  jal         func_18B1C0
    ctx->pc = 0x188EBCu;
    SET_GPR_U32(ctx, 31, 0x188EC4u);
    ctx->pc = 0x18B1C0u;
    if (runtime->hasFunction(0x18B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EC4u; }
        if (ctx->pc != 0x188EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidiInit__Fv_0x18b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EC4u; }
        if (ctx->pc != 0x188EC4u) { return; }
    }
    ctx->pc = 0x188EC4u;
label_188ec4:
    // 0x188ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x188ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ecc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x188eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ed0: 0xc062290  jal         func_188A40
    ctx->pc = 0x188ED0u;
    SET_GPR_U32(ctx, 31, 0x188ED8u);
    ctx->pc = 0x188ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188ED0u;
            // 0x188ed4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A40u;
    if (runtime->hasFunction(0x188A40u)) {
        auto targetFn = runtime->lookupFunction(0x188A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188ED8u; }
        if (ctx->pc != 0x188ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set_spu__Fiiii_0x188a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188ED8u; }
        if (ctx->pc != 0x188ED8u) { return; }
    }
    ctx->pc = 0x188ED8u;
label_188ed8:
    // 0x188ed8: 0x34048010  ori         $a0, $zero, 0x8010
    ctx->pc = 0x188ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188edc: 0xc062c94  jal         func_18B250
    ctx->pc = 0x188EDCu;
    SET_GPR_U32(ctx, 31, 0x188EE4u);
    ctx->pc = 0x188EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188EDCu;
            // 0x188ee0: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EE4u; }
        if (ctx->pc != 0x188EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EE4u; }
        if (ctx->pc != 0x188EE4u) { return; }
    }
    ctx->pc = 0x188EE4u;
label_188ee4:
    // 0x188ee4: 0xc045c0e  jal         func_117038
    ctx->pc = 0x188EE4u;
    SET_GPR_U32(ctx, 31, 0x188EECu);
    ctx->pc = 0x188EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188EE4u;
            // 0x188ee8: 0xaf828a70  sw          $v0, -0x7590($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EECu; }
        if (ctx->pc != 0x188EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EECu; }
        if (ctx->pc != 0x188EECu) { return; }
    }
    ctx->pc = 0x188EECu;
label_188eec:
    // 0x188eec: 0x8f858a70  lw          $a1, -0x7590($gp)
    ctx->pc = 0x188eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937200)));
    // 0x188ef0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188ef4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188EF4u;
    SET_GPR_U32(ctx, 31, 0x188EFCu);
    ctx->pc = 0x188EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188EF4u;
            // 0x188ef8: 0x24844650  addiu       $a0, $a0, 0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EFCu; }
        if (ctx->pc != 0x188EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EFCu; }
        if (ctx->pc != 0x188EFCu) { return; }
    }
    ctx->pc = 0x188EFCu;
label_188efc:
    // 0x188efc: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188f00: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x188F00u;
    {
        const bool branch_taken_0x188f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f00) {
            ctx->pc = 0x188F40u;
            goto label_188f40;
        }
    }
    ctx->pc = 0x188F08u;
    // 0x188f08: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x188f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x188f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188f10: 0x3445dd00  ori         $a1, $v0, 0xDD00
    ctx->pc = 0x188f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56576);
    // 0x188f14: 0xc045c4c  jal         func_117130
    ctx->pc = 0x188F14u;
    SET_GPR_U32(ctx, 31, 0x188F1Cu);
    ctx->pc = 0x188F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188F14u;
            // 0x188f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117130u;
    if (runtime->hasFunction(0x117130u)) {
        auto targetFn = runtime->lookupFunction(0x117130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F1Cu; }
        if (ctx->pc != 0x188F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x117130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F1Cu; }
        if (ctx->pc != 0x188F1Cu) { return; }
    }
    ctx->pc = 0x188F1Cu;
label_188f1c:
    // 0x188f1c: 0xaf828a80  sw          $v0, -0x7580($gp)
    ctx->pc = 0x188f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U32(ctx, 2));
    // 0x188f20: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x188f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188f24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188F24u;
    {
        const bool branch_taken_0x188f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f24) {
            ctx->pc = 0x188F40u;
            goto label_188f40;
        }
    }
    ctx->pc = 0x188F2Cu;
    // 0x188f2c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188f30: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188F30u;
    SET_GPR_U32(ctx, 31, 0x188F38u);
    ctx->pc = 0x188F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188F30u;
            // 0x188f34: 0x24844670  addiu       $a0, $a0, 0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F38u; }
        if (ctx->pc != 0x188F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F38u; }
        if (ctx->pc != 0x188F38u) { return; }
    }
    ctx->pc = 0x188F38u;
label_188f38:
    // 0x188f38: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188F38u;
            // 0x188f3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f38) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x188F40u;
label_188f40:
    // 0x188f40: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f44: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x188f48: 0xac2010a0  sw          $zero, 0x10A0($at)
    ctx->pc = 0x188f48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4256), GPR_U32(ctx, 0));
    // 0x188f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188f50: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f54: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x188f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x188f58: 0xac221090  sw          $v0, 0x1090($at)
    ctx->pc = 0x188f58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4240), GPR_U32(ctx, 2));
    // 0x188f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f60: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x188f64: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f68: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x188f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x188f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f70: 0xac221094  sw          $v0, 0x1094($at)
    ctx->pc = 0x188f70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4244), GPR_U32(ctx, 2));
    // 0x188f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x188f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x188f7c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f80: 0xac2210b8  sw          $v0, 0x10B8($at)
    ctx->pc = 0x188f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4280), GPR_U32(ctx, 2));
    // 0x188f84: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f88: 0xac20109c  sw          $zero, 0x109C($at)
    ctx->pc = 0x188f88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4252), GPR_U32(ctx, 0));
    // 0x188f8c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f90: 0xac201098  sw          $zero, 0x1098($at)
    ctx->pc = 0x188f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4248), GPR_U32(ctx, 0));
    // 0x188f94: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188f98: 0xac2010b0  sw          $zero, 0x10B0($at)
    ctx->pc = 0x188f98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4272), GPR_U32(ctx, 0));
    // 0x188f9c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188fa0: 0xac2010b4  sw          $zero, 0x10B4($at)
    ctx->pc = 0x188fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4276), GPR_U32(ctx, 0));
    // 0x188fa4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188fa8: 0xac2410bc  sw          $a0, 0x10BC($at)
    ctx->pc = 0x188fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4284), GPR_U32(ctx, 4));
    // 0x188fac: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x188fb0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x188fb4: 0x24631140  addiu       $v1, $v1, 0x1140
    ctx->pc = 0x188fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4416));
label_188fb8:
    // 0x188fb8: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x188fbc: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x188fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x188fc0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x188fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x188fc4: 0x252a0200  addiu       $t2, $t1, 0x200
    ctx->pc = 0x188fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x188fc8: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x188fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x188fcc: 0x252b0400  addiu       $t3, $t1, 0x400
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x188fd0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x188fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x188fd4: 0x252c0600  addiu       $t4, $t1, 0x600
    ctx->pc = 0x188fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1536));
    // 0x188fd8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x188fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x188fdc: 0x252d0800  addiu       $t5, $t1, 0x800
    ctx->pc = 0x188fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
    // 0x188fe0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x188fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x188fe4: 0x252e0a00  addiu       $t6, $t1, 0xA00
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 2560));
    // 0x188fe8: 0xad0a000c  sw          $t2, 0xC($t0)
    ctx->pc = 0x188fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 10));
    // 0x188fec: 0x252f0e00  addiu       $t7, $t1, 0xE00
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 3584));
    // 0x188ff0: 0xad220200  sw          $v0, 0x200($t1)
    ctx->pc = 0x188ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 512), GPR_U32(ctx, 2));
    // 0x188ff4: 0x252a0c00  addiu       $t2, $t1, 0xC00
    ctx->pc = 0x188ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 3072));
    // 0x188ff8: 0xad200204  sw          $zero, 0x204($t1)
    ctx->pc = 0x188ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 516), GPR_U32(ctx, 0));
    // 0x188ffc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x188ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x189000: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x189000u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x189004: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x189004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x189008: 0xad0b0014  sw          $t3, 0x14($t0)
    ctx->pc = 0x189008u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 11));
    // 0x18900c: 0x24e71000  addiu       $a3, $a3, 0x1000
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4096));
    // 0x189010: 0xad220400  sw          $v0, 0x400($t1)
    ctx->pc = 0x189010u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1024), GPR_U32(ctx, 2));
    // 0x189014: 0xad200404  sw          $zero, 0x404($t1)
    ctx->pc = 0x189014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1028), GPR_U32(ctx, 0));
    // 0x189018: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x189018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x18901c: 0xad0c001c  sw          $t4, 0x1C($t0)
    ctx->pc = 0x18901cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 12));
    // 0x189020: 0xad220600  sw          $v0, 0x600($t1)
    ctx->pc = 0x189020u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1536), GPR_U32(ctx, 2));
    // 0x189024: 0xad200604  sw          $zero, 0x604($t1)
    ctx->pc = 0x189024u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1540), GPR_U32(ctx, 0));
    // 0x189028: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x189028u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x18902c: 0xad0d0024  sw          $t5, 0x24($t0)
    ctx->pc = 0x18902cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 13));
    // 0x189030: 0xad220800  sw          $v0, 0x800($t1)
    ctx->pc = 0x189030u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2048), GPR_U32(ctx, 2));
    // 0x189034: 0xad200804  sw          $zero, 0x804($t1)
    ctx->pc = 0x189034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2052), GPR_U32(ctx, 0));
    // 0x189038: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x189038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
    // 0x18903c: 0xad0e002c  sw          $t6, 0x2C($t0)
    ctx->pc = 0x18903cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 14));
    // 0x189040: 0xad220a00  sw          $v0, 0xA00($t1)
    ctx->pc = 0x189040u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2560), GPR_U32(ctx, 2));
    // 0x189044: 0xad200a04  sw          $zero, 0xA04($t1)
    ctx->pc = 0x189044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2564), GPR_U32(ctx, 0));
    // 0x189048: 0xad000030  sw          $zero, 0x30($t0)
    ctx->pc = 0x189048u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 0));
    // 0x18904c: 0xad0a0034  sw          $t2, 0x34($t0)
    ctx->pc = 0x18904cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 10));
    // 0x189050: 0xad220c00  sw          $v0, 0xC00($t1)
    ctx->pc = 0x189050u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3072), GPR_U32(ctx, 2));
    // 0x189054: 0xad200c04  sw          $zero, 0xC04($t1)
    ctx->pc = 0x189054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3076), GPR_U32(ctx, 0));
    // 0x189058: 0xad000038  sw          $zero, 0x38($t0)
    ctx->pc = 0x189058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 0));
    // 0x18905c: 0xad0f003c  sw          $t7, 0x3C($t0)
    ctx->pc = 0x18905cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 15));
    // 0x189060: 0xad220e00  sw          $v0, 0xE00($t1)
    ctx->pc = 0x189060u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3584), GPR_U32(ctx, 2));
    // 0x189064: 0x18c0ffd4  blez        $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x189064u;
    {
        const bool branch_taken_0x189064 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x189068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189064u;
            // 0x189068: 0xad200e04  sw          $zero, 0xE04($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189064) {
            ctx->pc = 0x188FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188fb8;
        }
    }
    ctx->pc = 0x18906Cu;
    // 0x18906c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x18906cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x189070: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x189070u;
    {
        const bool branch_taken_0x189070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189070u;
            // 0x189074: 0x638c0  sll         $a3, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189070) {
            ctx->pc = 0x1890BCu;
            goto label_1890bc;
        }
    }
    ctx->pc = 0x189078u;
    // 0x189078: 0x64240  sll         $t0, $a2, 9
    ctx->pc = 0x189078u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x18907c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x18907cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x189080: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189084: 0x24a510c0  addiu       $a1, $a1, 0x10C0
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
    // 0x189088: 0x24841140  addiu       $a0, $a0, 0x1140
    ctx->pc = 0x189088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
    // 0x18908c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x18908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_189090:
    // 0x189090: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x189094: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x189098: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x189098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18909c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1890a0: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1890a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1890a4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1890a8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1890a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1890ac: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1890acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1890b0: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x1890b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x1890b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1890B4u;
    {
        const bool branch_taken_0x1890b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1890B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890B4u;
            // 0x1890b8: 0xad200004  sw          $zero, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b4) {
            ctx->pc = 0x189090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189090;
        }
    }
    ctx->pc = 0x1890BCu;
label_1890bc:
    // 0x1890bc: 0x0  nop
    ctx->pc = 0x1890bcu;
    // NOP
    // 0x1890c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1890c4: 0xc048f04  jal         func_123C10
    ctx->pc = 0x1890C4u;
    SET_GPR_U32(ctx, 31, 0x1890CCu);
    ctx->pc = 0x1890C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1890C4u;
            // 0x1890c8: 0x24841090  addiu       $a0, $a0, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123C10u;
    if (runtime->hasFunction(0x123C10u)) {
        auto targetFn = runtime->lookupFunction(0x123C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890CCu; }
        if (ctx->pc != 0x1890CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_Init_0x123c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890CCu; }
        if (ctx->pc != 0x1890CCu) { return; }
    }
    ctx->pc = 0x1890CCu;
label_1890cc:
    // 0x1890cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1890CCu;
    {
        const bool branch_taken_0x1890cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890CCu;
            // 0x1890d0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890cc) {
            ctx->pc = 0x1890E4u;
            goto label_1890e4;
        }
    }
    ctx->pc = 0x1890D4u;
    // 0x1890d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1890D4u;
    SET_GPR_U32(ctx, 31, 0x1890DCu);
    ctx->pc = 0x1890D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1890D4u;
            // 0x1890d8: 0x24844690  addiu       $a0, $a0, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890DCu; }
        if (ctx->pc != 0x1890DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890DCu; }
        if (ctx->pc != 0x1890DCu) { return; }
    }
    ctx->pc = 0x1890DCu;
label_1890dc:
    // 0x1890dc: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1890DCu;
    {
        const bool branch_taken_0x1890dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890DCu;
            // 0x1890e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890dc) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x1890E4u;
label_1890e4:
    // 0x1890e4: 0xaf808a84  sw          $zero, -0x757C($gp)
    ctx->pc = 0x1890e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937220), GPR_U32(ctx, 0));
    // 0x1890e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1890e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1890ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1890f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1890f8: 0x24842390  addiu       $a0, $a0, 0x2390
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9104));
label_1890fc:
    // 0x1890fc: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1890fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x189100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189104: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x189104u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x189108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18910c: 0xa1000004  sb          $zero, 0x4($t0)
    ctx->pc = 0x18910cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x189110: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x189110u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_189114:
    // 0x189114: 0x0  nop
    ctx->pc = 0x189114u;
    // NOP
    // 0x189118: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x189118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x18911c: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x18911cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x189120: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x189124: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x189124u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x189128: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x189128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18912c: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x18912cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x189130: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x189130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x189134: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x189134u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x189138: 0xad23001c  sw          $v1, 0x1C($t1)
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
    // 0x18913c: 0xad230020  sw          $v1, 0x20($t1)
    ctx->pc = 0x18913cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 3));
    // 0x189140: 0xad230024  sw          $v1, 0x24($t1)
    ctx->pc = 0x189140u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 3));
    // 0x189144: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x189144u;
    {
        const bool branch_taken_0x189144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189144u;
            // 0x189148: 0xad230028  sw          $v1, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189144) {
            ctx->pc = 0x189114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189114;
        }
    }
    ctx->pc = 0x18914Cu;
    // 0x18914c: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x18914cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x189150: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189150u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189158:
    // 0x189158: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x18915c: 0xad200050  sw          $zero, 0x50($t1)
    ctx->pc = 0x18915cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 0));
    // 0x189160: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x189164: 0xad200054  sw          $zero, 0x54($t1)
    ctx->pc = 0x189164u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 0));
    // 0x189168: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x189168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18916c: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x18916cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x189170: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x189174: 0xad20005c  sw          $zero, 0x5C($t1)
    ctx->pc = 0x189174u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 0));
    // 0x189178: 0xad200060  sw          $zero, 0x60($t1)
    ctx->pc = 0x189178u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 0));
    // 0x18917c: 0xad200064  sw          $zero, 0x64($t1)
    ctx->pc = 0x18917cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 0));
    // 0x189180: 0xad200068  sw          $zero, 0x68($t1)
    ctx->pc = 0x189180u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 0));
    // 0x189184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x189184u;
    {
        const bool branch_taken_0x189184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189184u;
            // 0x189188: 0xad20006c  sw          $zero, 0x6C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189184) {
            ctx->pc = 0x189158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189158;
        }
    }
    ctx->pc = 0x18918Cu;
    // 0x18918c: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x18918cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x189190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189194: 0xad000098  sw          $zero, 0x98($t0)
    ctx->pc = 0x189194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 152), GPR_U32(ctx, 0));
    // 0x189198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18919c: 0xad00009c  sw          $zero, 0x9C($t0)
    ctx->pc = 0x18919cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 156), GPR_U32(ctx, 0));
label_1891a0:
    // 0x1891a0: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1891a4: 0xad2000a0  sw          $zero, 0xA0($t1)
    ctx->pc = 0x1891a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 0));
    // 0x1891a8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1891ac: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x1891acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
    // 0x1891b0: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x1891b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1891b4: 0xad2000a8  sw          $zero, 0xA8($t1)
    ctx->pc = 0x1891b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 168), GPR_U32(ctx, 0));
    // 0x1891b8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1891bc: 0xad2000ac  sw          $zero, 0xAC($t1)
    ctx->pc = 0x1891bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 0));
    // 0x1891c0: 0xad2000b0  sw          $zero, 0xB0($t1)
    ctx->pc = 0x1891c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 176), GPR_U32(ctx, 0));
    // 0x1891c4: 0xad2000b4  sw          $zero, 0xB4($t1)
    ctx->pc = 0x1891c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 180), GPR_U32(ctx, 0));
    // 0x1891c8: 0xad2000b8  sw          $zero, 0xB8($t1)
    ctx->pc = 0x1891c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 184), GPR_U32(ctx, 0));
    // 0x1891cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1891CCu;
    {
        const bool branch_taken_0x1891cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1891D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1891CCu;
            // 0x1891d0: 0xad2000bc  sw          $zero, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891cc) {
            ctx->pc = 0x1891A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1891a0;
        }
    }
    ctx->pc = 0x1891D4u;
    // 0x1891d4: 0x2941000a  slti        $at, $t2, 0xA
    ctx->pc = 0x1891d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1891d8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1891D8u;
    {
        const bool branch_taken_0x1891d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1891D8u;
            // 0x1891dc: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891d8) {
            ctx->pc = 0x1891FCu;
            goto label_1891fc;
        }
    }
    ctx->pc = 0x1891E0u;
label_1891e0:
    // 0x1891e0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1891e4: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1891e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1891e8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1891e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1891ec: 0x2942000a  slti        $v0, $t2, 0xA
    ctx->pc = 0x1891ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1891f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1891f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1891F4u;
    {
        const bool branch_taken_0x1891f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1891f4) {
            ctx->pc = 0x1891E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1891e0;
        }
    }
    ctx->pc = 0x1891FCu;
label_1891fc:
    // 0x1891fc: 0x0  nop
    ctx->pc = 0x1891fcu;
    // NOP
    // 0x189200: 0xad0000c8  sw          $zero, 0xC8($t0)
    ctx->pc = 0x189200u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 200), GPR_U32(ctx, 0));
    // 0x189204: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18920c:
    // 0x18920c: 0x0  nop
    ctx->pc = 0x18920cu;
    // NOP
    // 0x189210: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x189214: 0xad2000cc  sw          $zero, 0xCC($t1)
    ctx->pc = 0x189214u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 204), GPR_U32(ctx, 0));
    // 0x189218: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x18921c: 0xad2000d0  sw          $zero, 0xD0($t1)
    ctx->pc = 0x18921cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 208), GPR_U32(ctx, 0));
    // 0x189220: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x189220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x189224: 0xad2000d4  sw          $zero, 0xD4($t1)
    ctx->pc = 0x189224u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 212), GPR_U32(ctx, 0));
    // 0x189228: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x18922c: 0xad2000d8  sw          $zero, 0xD8($t1)
    ctx->pc = 0x18922cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 216), GPR_U32(ctx, 0));
    // 0x189230: 0xad2000dc  sw          $zero, 0xDC($t1)
    ctx->pc = 0x189230u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 220), GPR_U32(ctx, 0));
    // 0x189234: 0xad2000e0  sw          $zero, 0xE0($t1)
    ctx->pc = 0x189234u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 224), GPR_U32(ctx, 0));
    // 0x189238: 0xad2000e4  sw          $zero, 0xE4($t1)
    ctx->pc = 0x189238u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 228), GPR_U32(ctx, 0));
    // 0x18923c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18923Cu;
    {
        const bool branch_taken_0x18923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18923Cu;
            // 0x189240: 0xad2000e8  sw          $zero, 0xE8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18923c) {
            ctx->pc = 0x18920Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18920c;
        }
    }
    ctx->pc = 0x189244u;
    // 0x189244: 0x2941000a  slti        $at, $t2, 0xA
    ctx->pc = 0x189244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x189248: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x189248u;
    {
        const bool branch_taken_0x189248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189248u;
            // 0x18924c: 0xa3080  sll         $a2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189248) {
            ctx->pc = 0x18926Cu;
            goto label_18926c;
        }
    }
    ctx->pc = 0x189250u;
label_189250:
    // 0x189250: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x189254: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x189254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x189258: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x189258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18925c: 0x2942000a  slti        $v0, $t2, 0xA
    ctx->pc = 0x18925cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x189260: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x189264: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189264u;
    {
        const bool branch_taken_0x189264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189264) {
            ctx->pc = 0x189250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189250;
        }
    }
    ctx->pc = 0x18926Cu;
label_18926c:
    // 0x18926c: 0x0  nop
    ctx->pc = 0x18926cu;
    // NOP
    // 0x189270: 0xad0000f4  sw          $zero, 0xF4($t0)
    ctx->pc = 0x189270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 244), GPR_U32(ctx, 0));
    // 0x189274: 0xad0000f8  sw          $zero, 0xF8($t0)
    ctx->pc = 0x189274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 248), GPR_U32(ctx, 0));
    // 0x189278: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18927c: 0xad000108  sw          $zero, 0x108($t0)
    ctx->pc = 0x18927cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 264), GPR_U32(ctx, 0));
    // 0x189280: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x189280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x189284: 0xad000118  sw          $zero, 0x118($t0)
    ctx->pc = 0x189284u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 280), GPR_U32(ctx, 0));
    // 0x189288: 0x24e70124  addiu       $a3, $a3, 0x124
    ctx->pc = 0x189288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 292));
    // 0x18928c: 0xad00011c  sw          $zero, 0x11C($t0)
    ctx->pc = 0x18928cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 284), GPR_U32(ctx, 0));
    // 0x189290: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x189290u;
    {
        const bool branch_taken_0x189290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189290u;
            // 0x189294: 0xad000120  sw          $zero, 0x120($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189290) {
            ctx->pc = 0x1890FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1890fc;
        }
    }
    ctx->pc = 0x189298u;
    // 0x189298: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18929c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1892a0: 0xac202390  sw          $zero, 0x2390($at)
    ctx->pc = 0x1892a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 0));
    // 0x1892a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1892a8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1892b0: 0xac2435c4  sw          $a0, 0x35C4($at)
    ctx->pc = 0x1892b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13764), GPR_U32(ctx, 4));
    // 0x1892b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1892b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1892b8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892bc: 0x240b000f  addiu       $t3, $zero, 0xF
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1892c0: 0xac24337c  sw          $a0, 0x337C($at)
    ctx->pc = 0x1892c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13180), GPR_U32(ctx, 4));
    // 0x1892c4: 0x240a5210  addiu       $t2, $zero, 0x5210
    ctx->pc = 0x1892c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21008));
    // 0x1892c8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892cc: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x1892d0: 0xac2026fc  sw          $zero, 0x26FC($at)
    ctx->pc = 0x1892d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9980), GPR_U32(ctx, 0));
    // 0x1892d4: 0x24073040  addiu       $a3, $zero, 0x3040
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12352));
    // 0x1892d8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892dc: 0x24063039  addiu       $a2, $zero, 0x3039
    ctx->pc = 0x1892dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12345));
    // 0x1892e0: 0xac252f04  sw          $a1, 0x2F04($at)
    ctx->pc = 0x1892e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12036), GPR_U32(ctx, 5));
    // 0x1892e4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1892e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1892ec: 0xac202ef8  sw          $zero, 0x2EF8($at)
    ctx->pc = 0x1892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12024), GPR_U32(ctx, 0));
    // 0x1892f0: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1892f4: 0xac252f44  sw          $a1, 0x2F44($at)
    ctx->pc = 0x1892f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12100), GPR_U32(ctx, 5));
    // 0x1892f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1892fc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189300: 0xac252cfc  sw          $a1, 0x2CFC($at)
    ctx->pc = 0x189300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 5));
    // 0x189304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x189304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189308: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18930c: 0xac252500  sw          $a1, 0x2500($at)
    ctx->pc = 0x18930cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 5));
    // 0x189310: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189314: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x189318: 0xac232cb0  sw          $v1, 0x2CB0($at)
    ctx->pc = 0x189318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11440), GPR_U32(ctx, 3));
    // 0x18931c: 0x34acd210  ori         $t4, $a1, 0xD210
    ctx->pc = 0x18931cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53776);
    // 0x189320: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189324: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x189328: 0xac2324b4  sw          $v1, 0x24B4($at)
    ctx->pc = 0x189328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9396), GPR_U32(ctx, 3));
    // 0x18932c: 0x34adae20  ori         $t5, $a1, 0xAE20
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44576);
    // 0x189330: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189334: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x189338: 0xac2334ac  sw          $v1, 0x34AC($at)
    ctx->pc = 0x189338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13484), GPR_U32(ctx, 3));
    // 0x18933c: 0x34a882e0  ori         $t0, $a1, 0x82E0
    ctx->pc = 0x18933cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33504);
    // 0x189340: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189344: 0x24053037  addiu       $a1, $zero, 0x3037
    ctx->pc = 0x189344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12343));
    // 0x189348: 0xac2325d8  sw          $v1, 0x25D8($at)
    ctx->pc = 0x189348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9688), GPR_U32(ctx, 3));
    // 0x18934c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189350: 0xac233388  sw          $v1, 0x3388($at)
    ctx->pc = 0x189350u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13192), GPR_U32(ctx, 3));
    // 0x189354: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189358: 0xac243264  sw          $a0, 0x3264($at)
    ctx->pc = 0x189358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12900), GPR_U32(ctx, 4));
    // 0x18935c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189360: 0xac202b8c  sw          $zero, 0x2B8C($at)
    ctx->pc = 0x189360u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11148), GPR_U32(ctx, 0));
    // 0x189364: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189368: 0xac202dd4  sw          $zero, 0x2DD4($at)
    ctx->pc = 0x189368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11732), GPR_U32(ctx, 0));
    // 0x18936c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189370: 0xac203140  sw          $zero, 0x3140($at)
    ctx->pc = 0x189370u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12608), GPR_U32(ctx, 0));
    // 0x189374: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189378: 0xac252f90  sw          $a1, 0x2F90($at)
    ctx->pc = 0x189378u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12176), GPR_U32(ctx, 5));
    // 0x18937c: 0x24053035  addiu       $a1, $zero, 0x3035
    ctx->pc = 0x18937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12341));
    // 0x189380: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189384: 0xac252d48  sw          $a1, 0x2D48($at)
    ctx->pc = 0x189384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11592), GPR_U32(ctx, 5));
    // 0x189388: 0x24053032  addiu       $a1, $zero, 0x3032
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12338));
    // 0x18938c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189390: 0xac25254c  sw          $a1, 0x254C($at)
    ctx->pc = 0x189390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9548), GPR_U32(ctx, 5));
    // 0x189394: 0x24053031  addiu       $a1, $zero, 0x3031
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12337));
    // 0x189398: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18939c: 0xac253544  sw          $a1, 0x3544($at)
    ctx->pc = 0x18939cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13636), GPR_U32(ctx, 5));
    // 0x1893a0: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893a4: 0x24053036  addiu       $a1, $zero, 0x3036
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12342));
    // 0x1893a8: 0xac20301c  sw          $zero, 0x301C($at)
    ctx->pc = 0x1893a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12316), GPR_U32(ctx, 0));
    // 0x1893ac: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893b0: 0xac2532fc  sw          $a1, 0x32FC($at)
    ctx->pc = 0x1893b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13052), GPR_U32(ctx, 5));
    // 0x1893b4: 0x24053010  addiu       $a1, $zero, 0x3010
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12304));
    // 0x1893b8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893bc: 0xac252c24  sw          $a1, 0x2C24($at)
    ctx->pc = 0x1893bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11300), GPR_U32(ctx, 5));
    // 0x1893c0: 0x24053038  addiu       $a1, $zero, 0x3038
    ctx->pc = 0x1893c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12344));
    // 0x1893c4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893c8: 0xac252e6c  sw          $a1, 0x2E6C($at)
    ctx->pc = 0x1893c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11884), GPR_U32(ctx, 5));
    // 0x1893cc: 0x24053034  addiu       $a1, $zero, 0x3034
    ctx->pc = 0x1893ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12340));
    // 0x1893d0: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893d4: 0xac2531d8  sw          $a1, 0x31D8($at)
    ctx->pc = 0x1893d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12760), GPR_U32(ctx, 5));
    // 0x1893d8: 0x24053033  addiu       $a1, $zero, 0x3033
    ctx->pc = 0x1893d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12339));
    // 0x1893dc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893e0: 0xac2530b4  sw          $a1, 0x30B4($at)
    ctx->pc = 0x1893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12468), GPR_U32(ctx, 5));
    // 0x1893e4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893e8: 0xa0202394  sb          $zero, 0x2394($at)
    ctx->pc = 0x1893e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1893ec: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893f0: 0xa0202700  sb          $zero, 0x2700($at)
    ctx->pc = 0x1893f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9984), (uint8_t)GPR_U32(ctx, 0));
    // 0x1893f4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1893f8: 0xa0202efc  sb          $zero, 0x2EFC($at)
    ctx->pc = 0x1893f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12028), (uint8_t)GPR_U32(ctx, 0));
    // 0x1893fc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189400: 0xa0202cb4  sb          $zero, 0x2CB4($at)
    ctx->pc = 0x189400u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11444), (uint8_t)GPR_U32(ctx, 0));
    // 0x189404: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189408: 0xa02024b8  sb          $zero, 0x24B8($at)
    ctx->pc = 0x189408u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9400), (uint8_t)GPR_U32(ctx, 0));
    // 0x18940c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18940cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189410: 0xa02034b0  sb          $zero, 0x34B0($at)
    ctx->pc = 0x189410u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 13488), (uint8_t)GPR_U32(ctx, 0));
    // 0x189414: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189418: 0xa02025dc  sb          $zero, 0x25DC($at)
    ctx->pc = 0x189418u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9692), (uint8_t)GPR_U32(ctx, 0));
    // 0x18941c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189420: 0xa020338c  sb          $zero, 0x338C($at)
    ctx->pc = 0x189420u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 13196), (uint8_t)GPR_U32(ctx, 0));
    // 0x189424: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189428: 0xa0243268  sb          $a0, 0x3268($at)
    ctx->pc = 0x189428u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12904), (uint8_t)GPR_U32(ctx, 4));
    // 0x18942c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189430: 0xa0202b90  sb          $zero, 0x2B90($at)
    ctx->pc = 0x189430u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11152), (uint8_t)GPR_U32(ctx, 0));
    // 0x189434: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189438: 0xa0202dd8  sb          $zero, 0x2DD8($at)
    ctx->pc = 0x189438u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11736), (uint8_t)GPR_U32(ctx, 0));
    // 0x18943c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18943cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189440: 0xa0203144  sb          $zero, 0x3144($at)
    ctx->pc = 0x189440u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12612), (uint8_t)GPR_U32(ctx, 0));
    // 0x189444: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189448: 0xa0203020  sb          $zero, 0x3020($at)
    ctx->pc = 0x189448u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12320), (uint8_t)GPR_U32(ctx, 0));
    // 0x18944c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189450: 0xac2225e0  sw          $v0, 0x25E0($at)
    ctx->pc = 0x189450u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 2));
    // 0x189454: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189458: 0xac233390  sw          $v1, 0x3390($at)
    ctx->pc = 0x189458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13200), GPR_U32(ctx, 3));
    // 0x18945c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189460: 0xac242f08  sw          $a0, 0x2F08($at)
    ctx->pc = 0x189460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12040), GPR_U32(ctx, 4));
    // 0x189464: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189468: 0xac242cbc  sw          $a0, 0x2CBC($at)
    ctx->pc = 0x189468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11452), GPR_U32(ctx, 4));
    // 0x18946c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189470: 0xac2b2f0c  sw          $t3, 0x2F0C($at)
    ctx->pc = 0x189470u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12044), GPR_U32(ctx, 11));
    // 0x189474: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189478: 0xac232f10  sw          $v1, 0x2F10($at)
    ctx->pc = 0x189478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12048), GPR_U32(ctx, 3));
    // 0x18947c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189480: 0xac222f14  sw          $v0, 0x2F14($at)
    ctx->pc = 0x189480u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12052), GPR_U32(ctx, 2));
    // 0x189484: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189488: 0xac2b2cc0  sw          $t3, 0x2CC0($at)
    ctx->pc = 0x189488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11456), GPR_U32(ctx, 11));
    // 0x18948c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189490: 0xac2b24c0  sw          $t3, 0x24C0($at)
    ctx->pc = 0x189490u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9408), GPR_U32(ctx, 11));
    // 0x189494: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189498: 0xac232cc4  sw          $v1, 0x2CC4($at)
    ctx->pc = 0x189498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11460), GPR_U32(ctx, 3));
    // 0x18949c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894a0: 0xac222cc8  sw          $v0, 0x2CC8($at)
    ctx->pc = 0x1894a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11464), GPR_U32(ctx, 2));
    // 0x1894a4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894a8: 0xac2324c4  sw          $v1, 0x24C4($at)
    ctx->pc = 0x1894a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9412), GPR_U32(ctx, 3));
    // 0x1894ac: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894b0: 0xac2224c8  sw          $v0, 0x24C8($at)
    ctx->pc = 0x1894b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9416), GPR_U32(ctx, 2));
    // 0x1894b4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894b8: 0xac2234bc  sw          $v0, 0x34BC($at)
    ctx->pc = 0x1894b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13500), GPR_U32(ctx, 2));
    // 0x1894bc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894c0: 0xac2334b8  sw          $v1, 0x34B8($at)
    ctx->pc = 0x1894c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13496), GPR_U32(ctx, 3));
    // 0x1894c4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894c8: 0xac2334f8  sw          $v1, 0x34F8($at)
    ctx->pc = 0x1894c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13560), GPR_U32(ctx, 3));
    // 0x1894cc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894d0: 0xac2a242c  sw          $t2, 0x242C($at)
    ctx->pc = 0x1894d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9260), GPR_U32(ctx, 10));
    // 0x1894d4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894d8: 0xac2a2424  sw          $t2, 0x2424($at)
    ctx->pc = 0x1894d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9252), GPR_U32(ctx, 10));
    // 0x1894dc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894e0: 0xac2a2798  sw          $t2, 0x2798($at)
    ctx->pc = 0x1894e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10136), GPR_U32(ctx, 10));
    // 0x1894e4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894e8: 0xac2a2790  sw          $t2, 0x2790($at)
    ctx->pc = 0x1894e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10128), GPR_U32(ctx, 10));
    // 0x1894ec: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894f0: 0xac2c2f94  sw          $t4, 0x2F94($at)
    ctx->pc = 0x1894f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12180), GPR_U32(ctx, 12));
    // 0x1894f4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1894f8: 0xac2c2f8c  sw          $t4, 0x2F8C($at)
    ctx->pc = 0x1894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12172), GPR_U32(ctx, 12));
    // 0x1894fc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189500: 0xac2c2d4c  sw          $t4, 0x2D4C($at)
    ctx->pc = 0x189500u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11596), GPR_U32(ctx, 12));
    // 0x189504: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189508: 0xac2c2d44  sw          $t4, 0x2D44($at)
    ctx->pc = 0x189508u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11588), GPR_U32(ctx, 12));
    // 0x18950c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189510: 0xac2c2550  sw          $t4, 0x2550($at)
    ctx->pc = 0x189510u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9552), GPR_U32(ctx, 12));
    // 0x189514: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189518: 0xac2c2548  sw          $t4, 0x2548($at)
    ctx->pc = 0x189518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9544), GPR_U32(ctx, 12));
    // 0x18951c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189520: 0xac2c3548  sw          $t4, 0x3548($at)
    ctx->pc = 0x189520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13640), GPR_U32(ctx, 12));
    // 0x189524: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189528: 0xac2c3540  sw          $t4, 0x3540($at)
    ctx->pc = 0x189528u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13632), GPR_U32(ctx, 12));
    // 0x18952c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189530: 0xac2c2674  sw          $t4, 0x2674($at)
    ctx->pc = 0x189530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9844), GPR_U32(ctx, 12));
    // 0x189534: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189538: 0xac2c266c  sw          $t4, 0x266C($at)
    ctx->pc = 0x189538u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9836), GPR_U32(ctx, 12));
    // 0x18953c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189540: 0xac2c3424  sw          $t4, 0x3424($at)
    ctx->pc = 0x189540u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13348), GPR_U32(ctx, 12));
    // 0x189544: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189548: 0xac2c341c  sw          $t4, 0x341C($at)
    ctx->pc = 0x189548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13340), GPR_U32(ctx, 12));
    // 0x18954c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189550: 0xac2d3300  sw          $t5, 0x3300($at)
    ctx->pc = 0x189550u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13056), GPR_U32(ctx, 13));
    // 0x189554: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189558: 0xac2d32f8  sw          $t5, 0x32F8($at)
    ctx->pc = 0x189558u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13048), GPR_U32(ctx, 13));
    // 0x18955c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189560: 0xac2d2c28  sw          $t5, 0x2C28($at)
    ctx->pc = 0x189560u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11304), GPR_U32(ctx, 13));
    // 0x189564: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189568: 0xac2d2c20  sw          $t5, 0x2C20($at)
    ctx->pc = 0x189568u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11296), GPR_U32(ctx, 13));
    // 0x18956c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189570: 0xac292e70  sw          $t1, 0x2E70($at)
    ctx->pc = 0x189570u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11888), GPR_U32(ctx, 9));
    // 0x189574: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189578: 0xac292e68  sw          $t1, 0x2E68($at)
    ctx->pc = 0x189578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11880), GPR_U32(ctx, 9));
    // 0x18957c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189580: 0xac2d31dc  sw          $t5, 0x31DC($at)
    ctx->pc = 0x189580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12764), GPR_U32(ctx, 13));
    // 0x189584: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189588: 0xac2d31d4  sw          $t5, 0x31D4($at)
    ctx->pc = 0x189588u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12756), GPR_U32(ctx, 13));
    // 0x18958c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189590: 0xac2830b8  sw          $t0, 0x30B8($at)
    ctx->pc = 0x189590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12472), GPR_U32(ctx, 8));
    // 0x189594: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x189594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x189598: 0xac2830b0  sw          $t0, 0x30B0($at)
    ctx->pc = 0x189598u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12464), GPR_U32(ctx, 8));
    // 0x18959c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1895a0: 0xac272428  sw          $a3, 0x2428($at)
    ctx->pc = 0x1895a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9256), GPR_U32(ctx, 7));
    // 0x1895a4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1895a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1895a8: 0xac272794  sw          $a3, 0x2794($at)
    ctx->pc = 0x1895a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10132), GPR_U32(ctx, 7));
    // 0x1895ac: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1895b0: 0xac262670  sw          $a2, 0x2670($at)
    ctx->pc = 0x1895b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9840), GPR_U32(ctx, 6));
    // 0x1895b4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1895b8: 0xac263420  sw          $a2, 0x3420($at)
    ctx->pc = 0x1895b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13344), GPR_U32(ctx, 6));
    // 0x1895bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1895bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1895c0:
    // 0x1895c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1895c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1895c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1895c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1895c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1895c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1895cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1895ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1895d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1895d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1895d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1895D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1895D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895D4u;
            // 0x1895d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1895DCu;
}
