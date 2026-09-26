#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi
// Address: 0x22fb90 - 0x22fd38
void PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90");
#endif

    switch (ctx->pc) {
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fcf4u: goto label_22fcf4;
        case 0x22fd08u: goto label_22fd08;
        case 0x22fd20u: goto label_22fd20;
        default: break;
    }

    ctx->pc = 0x22fb90u;

    // 0x22fb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22fb94: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22fb98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22fb9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22fba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22fba4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22fba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fbac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22fbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbb0: 0x8f8594f8  lw          $a1, -0x6B08($gp)
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x22fbb4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x22fbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbb8: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x22fbbc: 0x10e3004a  beq         $a3, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x22FBBCu;
    {
        const bool branch_taken_0x22fbbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBBCu;
            // 0x22fbc0: 0xa0870009  sb          $a3, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbbc) {
            ctx->pc = 0x22FCE8u;
            goto label_22fce8;
        }
    }
    ctx->pc = 0x22FBC4u;
    // 0x22fbc4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22fbc8: 0x10e30038  beq         $a3, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x22FBC8u;
    {
        const bool branch_taken_0x22fbc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBC8u;
            // 0x22fbcc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc8) {
            ctx->pc = 0x22FCACu;
            goto label_22fcac;
        }
    }
    ctx->pc = 0x22FBD0u;
    // 0x22fbd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fbd4: 0x10e30026  beq         $a3, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x22FBD4u;
    {
        const bool branch_taken_0x22fbd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBD4u;
            // 0x22fbd8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbd4) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FBDCu;
    // 0x22fbdc: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x22FBDCu;
    {
        const bool branch_taken_0x22fbdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBDCu;
            // 0x22fbe0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbdc) {
            ctx->pc = 0x22FC34u;
            goto label_22fc34;
        }
    }
    ctx->pc = 0x22FBE4u;
    // 0x22fbe4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22fbe8: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FBE8u;
    {
        const bool branch_taken_0x22fbe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBE8u;
            // 0x22fbec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbe8) {
            ctx->pc = 0x22FBF8u;
            goto label_22fbf8;
        }
    }
    ctx->pc = 0x22FBF0u;
    // 0x22fbf0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x22FBF0u;
    {
        const bool branch_taken_0x22fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBF0u;
            // 0x22fbf4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbf0) {
            ctx->pc = 0x22FD24u;
            goto label_22fd24;
        }
    }
    ctx->pc = 0x22FBF8u;
label_22fbf8:
    // 0x22fbf8: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FBF8u;
    SET_GPR_U32(ctx, 31, 0x22FC00u);
    ctx->pc = 0x22FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBF8u;
            // 0x22fbfc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC00u; }
        if (ctx->pc != 0x22FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC00u; }
        if (ctx->pc != 0x22FC00u) { return; }
    }
    ctx->pc = 0x22FC00u;
label_22fc00:
    // 0x22fc00: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22fc04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc08: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x22fc08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22fc0c: 0xc08bf50  jal         func_22FD40
    ctx->pc = 0x22FC0Cu;
    SET_GPR_U32(ctx, 31, 0x22FC14u);
    ctx->pc = 0x22FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC0Cu;
            // 0x22fc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD40u;
    if (runtime->hasFunction(0x22FD40u)) {
        auto targetFn = runtime->lookupFunction(0x22FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC14u; }
        if (ctx->pc != 0x22FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC14u; }
        if (ctx->pc != 0x22FC14u) { return; }
    }
    ctx->pc = 0x22FC14u;
label_22fc14:
    // 0x22fc14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fc24: 0xc08bf6c  jal         func_22FDB0
    ctx->pc = 0x22FC24u;
    SET_GPR_U32(ctx, 31, 0x22FC2Cu);
    ctx->pc = 0x22FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC24u;
            // 0x22fc28: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDB0u;
    if (runtime->hasFunction(0x22FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC2Cu; }
        if (ctx->pc != 0x22FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC2Cu; }
        if (ctx->pc != 0x22FC2Cu) { return; }
    }
    ctx->pc = 0x22FC2Cu;
label_22fc2c:
    // 0x22fc2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22FC2Cu;
    {
        const bool branch_taken_0x22fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc2c) {
            ctx->pc = 0x22FD20u;
            goto label_22fd20;
        }
    }
    ctx->pc = 0x22FC34u;
label_22fc34:
    // 0x22fc34: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FC34u;
    SET_GPR_U32(ctx, 31, 0x22FC3Cu);
    ctx->pc = 0x22FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC34u;
            // 0x22fc38: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC3Cu; }
        if (ctx->pc != 0x22FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC3Cu; }
        if (ctx->pc != 0x22FC3Cu) { return; }
    }
    ctx->pc = 0x22FC3Cu;
label_22fc3c:
    // 0x22fc3c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x22fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22fc40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc44: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x22fc44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22fc48: 0xc08bf50  jal         func_22FD40
    ctx->pc = 0x22FC48u;
    SET_GPR_U32(ctx, 31, 0x22FC50u);
    ctx->pc = 0x22FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC48u;
            // 0x22fc4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD40u;
    if (runtime->hasFunction(0x22FD40u)) {
        auto targetFn = runtime->lookupFunction(0x22FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC50u; }
        if (ctx->pc != 0x22FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC50u; }
        if (ctx->pc != 0x22FC50u) { return; }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc5c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x22fc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fc60: 0xc08bf6c  jal         func_22FDB0
    ctx->pc = 0x22FC60u;
    SET_GPR_U32(ctx, 31, 0x22FC68u);
    ctx->pc = 0x22FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC60u;
            // 0x22fc64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDB0u;
    if (runtime->hasFunction(0x22FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC68u; }
        if (ctx->pc != 0x22FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC68u; }
        if (ctx->pc != 0x22FC68u) { return; }
    }
    ctx->pc = 0x22FC68u;
label_22fc68:
    // 0x22fc68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22FC68u;
    {
        const bool branch_taken_0x22fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc68) {
            ctx->pc = 0x22FD20u;
            goto label_22fd20;
        }
    }
    ctx->pc = 0x22FC70u;
label_22fc70:
    // 0x22fc70: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FC70u;
    SET_GPR_U32(ctx, 31, 0x22FC78u);
    ctx->pc = 0x22FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC70u;
            // 0x22fc74: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC78u; }
        if (ctx->pc != 0x22FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC78u; }
        if (ctx->pc != 0x22FC78u) { return; }
    }
    ctx->pc = 0x22FC78u;
label_22fc78:
    // 0x22fc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc80: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x22fc80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22fc84: 0xc08bf50  jal         func_22FD40
    ctx->pc = 0x22FC84u;
    SET_GPR_U32(ctx, 31, 0x22FC8Cu);
    ctx->pc = 0x22FC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC84u;
            // 0x22fc88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD40u;
    if (runtime->hasFunction(0x22FD40u)) {
        auto targetFn = runtime->lookupFunction(0x22FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC8Cu; }
        if (ctx->pc != 0x22FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC8Cu; }
        if (ctx->pc != 0x22FC8Cu) { return; }
    }
    ctx->pc = 0x22FC8Cu;
label_22fc8c:
    // 0x22fc8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc98: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x22fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fc9c: 0xc08bf6c  jal         func_22FDB0
    ctx->pc = 0x22FC9Cu;
    SET_GPR_U32(ctx, 31, 0x22FCA4u);
    ctx->pc = 0x22FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC9Cu;
            // 0x22fca0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDB0u;
    if (runtime->hasFunction(0x22FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCA4u; }
        if (ctx->pc != 0x22FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCA4u; }
        if (ctx->pc != 0x22FCA4u) { return; }
    }
    ctx->pc = 0x22FCA4u;
label_22fca4:
    // 0x22fca4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22FCA4u;
    {
        const bool branch_taken_0x22fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fca4) {
            ctx->pc = 0x22FD20u;
            goto label_22fd20;
        }
    }
    ctx->pc = 0x22FCACu;
label_22fcac:
    // 0x22fcac: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FCACu;
    SET_GPR_U32(ctx, 31, 0x22FCB4u);
    ctx->pc = 0x22FCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCACu;
            // 0x22fcb0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCB4u; }
        if (ctx->pc != 0x22FCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCB4u; }
        if (ctx->pc != 0x22FCB4u) { return; }
    }
    ctx->pc = 0x22FCB4u;
label_22fcb4:
    // 0x22fcb4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x22fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x22fcb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcbc: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x22fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22fcc0: 0xc08bf50  jal         func_22FD40
    ctx->pc = 0x22FCC0u;
    SET_GPR_U32(ctx, 31, 0x22FCC8u);
    ctx->pc = 0x22FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCC0u;
            // 0x22fcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD40u;
    if (runtime->hasFunction(0x22FD40u)) {
        auto targetFn = runtime->lookupFunction(0x22FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCC8u; }
        if (ctx->pc != 0x22FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCC8u; }
        if (ctx->pc != 0x22FCC8u) { return; }
    }
    ctx->pc = 0x22FCC8u;
label_22fcc8:
    // 0x22fcc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcd4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fcd8: 0xc08bf6c  jal         func_22FDB0
    ctx->pc = 0x22FCD8u;
    SET_GPR_U32(ctx, 31, 0x22FCE0u);
    ctx->pc = 0x22FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCD8u;
            // 0x22fcdc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDB0u;
    if (runtime->hasFunction(0x22FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCE0u; }
        if (ctx->pc != 0x22FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCE0u; }
        if (ctx->pc != 0x22FCE0u) { return; }
    }
    ctx->pc = 0x22FCE0u;
label_22fce0:
    // 0x22fce0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22FCE0u;
    {
        const bool branch_taken_0x22fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fce0) {
            ctx->pc = 0x22FD20u;
            goto label_22fd20;
        }
    }
    ctx->pc = 0x22FCE8u;
label_22fce8:
    // 0x22fce8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22fce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcec: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FCECu;
    SET_GPR_U32(ctx, 31, 0x22FCF4u);
    ctx->pc = 0x22FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCECu;
            // 0x22fcf0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCF4u; }
        if (ctx->pc != 0x22FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCF4u; }
        if (ctx->pc != 0x22FCF4u) { return; }
    }
    ctx->pc = 0x22FCF4u;
label_22fcf4:
    // 0x22fcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fcf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcfc: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x22fcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x22fd00: 0xc08bf50  jal         func_22FD40
    ctx->pc = 0x22FD00u;
    SET_GPR_U32(ctx, 31, 0x22FD08u);
    ctx->pc = 0x22FD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD00u;
            // 0x22fd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD40u;
    if (runtime->hasFunction(0x22FD40u)) {
        auto targetFn = runtime->lookupFunction(0x22FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD08u; }
        if (ctx->pc != 0x22FD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMemory__11CMenuEffectFP9mgCMemory_0x22fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD08u; }
        if (ctx->pc != 0x22FD08u) { return; }
    }
    ctx->pc = 0x22FD08u;
label_22fd08:
    // 0x22fd08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x22fd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fd18: 0xc08bf6c  jal         func_22FDB0
    ctx->pc = 0x22FD18u;
    SET_GPR_U32(ctx, 31, 0x22FD20u);
    ctx->pc = 0x22FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD18u;
            // 0x22fd1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDB0u;
    if (runtime->hasFunction(0x22FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD20u; }
        if (ctx->pc != 0x22FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD20u; }
        if (ctx->pc != 0x22FD20u) { return; }
    }
    ctx->pc = 0x22FD20u;
label_22fd20:
    // 0x22fd20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22fd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22fd24:
    // 0x22fd24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fd30: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD30u;
            // 0x22fd34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FD38u;
}
