#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__6CSceneFv
// Address: 0x282ea0 - 0x283148
void Initialize__6CSceneFv_0x282ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__6CSceneFv_0x282ea0");
#endif

    switch (ctx->pc) {
        case 0x282ed0u: goto label_282ed0;
        case 0x282f0cu: goto label_282f0c;
        case 0x282f14u: goto label_282f14;
        case 0x282f44u: goto label_282f44;
        case 0x282f4cu: goto label_282f4c;
        case 0x282f7cu: goto label_282f7c;
        case 0x282f84u: goto label_282f84;
        case 0x282fb4u: goto label_282fb4;
        case 0x282fbcu: goto label_282fbc;
        case 0x282fecu: goto label_282fec;
        case 0x282ff4u: goto label_282ff4;
        case 0x283024u: goto label_283024;
        case 0x28302cu: goto label_28302c;
        case 0x28305cu: goto label_28305c;
        case 0x283064u: goto label_283064;
        case 0x28308cu: goto label_28308c;
        case 0x283094u: goto label_283094;
        case 0x2830d8u: goto label_2830d8;
        case 0x2830e0u: goto label_2830e0;
        case 0x2830ecu: goto label_2830ec;
        case 0x283124u: goto label_283124;
        default: break;
    }

    ctx->pc = 0x282ea0u;

    // 0x282ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282ea4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x282ea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282eac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282eacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282ec0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x282ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x282ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282EC8u;
    {
        const bool branch_taken_0x282ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EC8u;
            // 0x282ecc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ec8) {
            ctx->pc = 0x282EDCu;
            goto label_282edc;
        }
    }
    ctx->pc = 0x282ED0u;
label_282ed0:
    // 0x282ed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x282ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282ed4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x282ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x282ed8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x282ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_282edc:
    // 0x282edc: 0x0  nop
    ctx->pc = 0x282edcu;
    // NOP
    // 0x282ee0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x282ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282ee4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x282ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282ee8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282EE8u;
    {
        const bool branch_taken_0x282ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EE8u;
            // 0x282eec: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ee8) {
            ctx->pc = 0x282ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282ed0;
        }
    }
    ctx->pc = 0x282EF0u;
    // 0x282ef0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x282ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x282ef4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282ef8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x282ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x282efc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f00: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x282f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x282f04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282F04u;
    {
        const bool branch_taken_0x282f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F04u;
            // 0x282f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f04) {
            ctx->pc = 0x282F1Cu;
            goto label_282f1c;
        }
    }
    ctx->pc = 0x282F0Cu;
label_282f0c:
    // 0x282f0c: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x282F0Cu;
    SET_GPR_U32(ctx, 31, 0x282F14u);
    ctx->pc = 0x282F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282F0Cu;
            // 0x282f10: 0x24440044  addiu       $a0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F14u; }
        if (ctx->pc != 0x282F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F14u; }
        if (ctx->pc != 0x282F14u) { return; }
    }
    ctx->pc = 0x282F14u;
label_282f14:
    // 0x282f14: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x282f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x282f18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282f1c:
    // 0x282f1c: 0x0  nop
    ctx->pc = 0x282f1cu;
    // NOP
    // 0x282f20: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x282f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x282f24: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x282f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f28: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x282F28u;
    {
        const bool branch_taken_0x282f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F28u;
            // 0x282f2c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f28) {
            ctx->pc = 0x282F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f0c;
        }
    }
    ctx->pc = 0x282F30u;
    // 0x282f30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x282f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x282f34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f38: 0xae022044  sw          $v0, 0x2044($s0)
    ctx->pc = 0x282f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8260), GPR_U32(ctx, 2));
    // 0x282f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282F3Cu;
    {
        const bool branch_taken_0x282f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F3Cu;
            // 0x282f40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f3c) {
            ctx->pc = 0x282F54u;
            goto label_282f54;
        }
    }
    ctx->pc = 0x282F44u;
label_282f44:
    // 0x282f44: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x282F44u;
    SET_GPR_U32(ctx, 31, 0x282F4Cu);
    ctx->pc = 0x282F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282F44u;
            // 0x282f48: 0x24442048  addiu       $a0, $v0, 0x2048 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D00u;
    if (runtime->hasFunction(0x282D00u)) {
        auto targetFn = runtime->lookupFunction(0x282D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F4Cu; }
        if (ctx->pc != 0x282F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCameraFv_0x282d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F4Cu; }
        if (ctx->pc != 0x282F4Cu) { return; }
    }
    ctx->pc = 0x282F4Cu;
label_282f4c:
    // 0x282f4c: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x282f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x282f50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282f54:
    // 0x282f54: 0x0  nop
    ctx->pc = 0x282f54u;
    // NOP
    // 0x282f58: 0x8e022044  lw          $v0, 0x2044($s0)
    ctx->pc = 0x282f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8260)));
    // 0x282f5c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x282f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f60: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x282F60u;
    {
        const bool branch_taken_0x282f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F60u;
            // 0x282f64: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f60) {
            ctx->pc = 0x282F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f44;
        }
    }
    ctx->pc = 0x282F68u;
    // 0x282f68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x282f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f70: 0xae022208  sw          $v0, 0x2208($s0)
    ctx->pc = 0x282f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8712), GPR_U32(ctx, 2));
    // 0x282f74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282F74u;
    {
        const bool branch_taken_0x282f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F74u;
            // 0x282f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f74) {
            ctx->pc = 0x282F8Cu;
            goto label_282f8c;
        }
    }
    ctx->pc = 0x282F7Cu;
label_282f7c:
    // 0x282f7c: 0xc0a0afc  jal         func_282BF0
    ctx->pc = 0x282F7Cu;
    SET_GPR_U32(ctx, 31, 0x282F84u);
    ctx->pc = 0x282F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282F7Cu;
            // 0x282f80: 0x2444220c  addiu       $a0, $v0, 0x220C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8716));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282BF0u;
    if (runtime->hasFunction(0x282BF0u)) {
        auto targetFn = runtime->lookupFunction(0x282BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F84u; }
        if (ctx->pc != 0x282F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneMessageFv_0x282bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F84u; }
        if (ctx->pc != 0x282F84u) { return; }
    }
    ctx->pc = 0x282F84u;
label_282f84:
    // 0x282f84: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x282f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x282f88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282f8c:
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
    // 0x282f90: 0x8e022208  lw          $v0, 0x2208($s0)
    ctx->pc = 0x282f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8712)));
    // 0x282f94: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x282f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f98: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x282F98u;
    {
        const bool branch_taken_0x282f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F98u;
            // 0x282f9c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f98) {
            ctx->pc = 0x282F7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f7c;
        }
    }
    ctx->pc = 0x282FA0u;
    // 0x282fa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x282fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282fa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282fa8: 0xae0227e0  sw          $v0, 0x27E0($s0)
    ctx->pc = 0x282fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10208), GPR_U32(ctx, 2));
    // 0x282fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282FACu;
    {
        const bool branch_taken_0x282fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FACu;
            // 0x282fb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fac) {
            ctx->pc = 0x282FC4u;
            goto label_282fc4;
        }
    }
    ctx->pc = 0x282FB4u;
label_282fb4:
    // 0x282fb4: 0xc0a0ad8  jal         func_282B60
    ctx->pc = 0x282FB4u;
    SET_GPR_U32(ctx, 31, 0x282FBCu);
    ctx->pc = 0x282FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282FB4u;
            // 0x282fb8: 0x244427e4  addiu       $a0, $v0, 0x27E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B60u;
    if (runtime->hasFunction(0x282B60u)) {
        auto targetFn = runtime->lookupFunction(0x282B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FBCu; }
        if (ctx->pc != 0x282FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneMapFv_0x282b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FBCu; }
        if (ctx->pc != 0x282FBCu) { return; }
    }
    ctx->pc = 0x282FBCu;
label_282fbc:
    // 0x282fbc: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x282fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x282fc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282fc4:
    // 0x282fc4: 0x0  nop
    ctx->pc = 0x282fc4u;
    // NOP
    // 0x282fc8: 0x8e0227e0  lw          $v0, 0x27E0($s0)
    ctx->pc = 0x282fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10208)));
    // 0x282fcc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x282fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282fd0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x282FD0u;
    {
        const bool branch_taken_0x282fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FD0u;
            // 0x282fd4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fd0) {
            ctx->pc = 0x282FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282FD8u;
    // 0x282fd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x282fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282fe0: 0xae0228c4  sw          $v0, 0x28C4($s0)
    ctx->pc = 0x282fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 2));
    // 0x282fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282FE4u;
    {
        const bool branch_taken_0x282fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FE4u;
            // 0x282fe8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fe4) {
            ctx->pc = 0x282FFCu;
            goto label_282ffc;
        }
    }
    ctx->pc = 0x282FECu;
label_282fec:
    // 0x282fec: 0xc0a0b64  jal         func_282D90
    ctx->pc = 0x282FECu;
    SET_GPR_U32(ctx, 31, 0x282FF4u);
    ctx->pc = 0x282FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282FECu;
            // 0x282ff0: 0x244428c8  addiu       $a0, $v0, 0x28C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D90u;
    if (runtime->hasFunction(0x282D90u)) {
        auto targetFn = runtime->lookupFunction(0x282D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FF4u; }
        if (ctx->pc != 0x282FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneSkyFv_0x282d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FF4u; }
        if (ctx->pc != 0x282FF4u) { return; }
    }
    ctx->pc = 0x282FF4u;
label_282ff4:
    // 0x282ff4: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x282ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x282ff8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282ffc:
    // 0x282ffc: 0x0  nop
    ctx->pc = 0x282ffcu;
    // NOP
    // 0x283000: 0x8e0228c4  lw          $v0, 0x28C4($s0)
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x283004: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x283004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283008: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x283008u;
    {
        const bool branch_taken_0x283008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283008u;
            // 0x28300c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283008) {
            ctx->pc = 0x282FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282fec;
        }
    }
    ctx->pc = 0x283010u;
    // 0x283010: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x283010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x283014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283018: 0xae0229a8  sw          $v0, 0x29A8($s0)
    ctx->pc = 0x283018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10664), GPR_U32(ctx, 2));
    // 0x28301c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28301Cu;
    {
        const bool branch_taken_0x28301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28301Cu;
            // 0x283020: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28301c) {
            ctx->pc = 0x283034u;
            goto label_283034;
        }
    }
    ctx->pc = 0x283024u;
label_283024:
    // 0x283024: 0xc0a0b68  jal         func_282DA0
    ctx->pc = 0x283024u;
    SET_GPR_U32(ctx, 31, 0x28302Cu);
    ctx->pc = 0x283028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283024u;
            // 0x283028: 0x244429ac  addiu       $a0, $v0, 0x29AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DA0u;
    if (runtime->hasFunction(0x282DA0u)) {
        auto targetFn = runtime->lookupFunction(0x282DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28302Cu; }
        if (ctx->pc != 0x28302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneGameObjFv_0x282da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28302Cu; }
        if (ctx->pc != 0x28302Cu) { return; }
    }
    ctx->pc = 0x28302Cu;
label_28302c:
    // 0x28302c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x283030: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x283030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_283034:
    // 0x283034: 0x0  nop
    ctx->pc = 0x283034u;
    // NOP
    // 0x283038: 0x8e0228c4  lw          $v0, 0x28C4($s0)
    ctx->pc = 0x283038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x28303c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x28303cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283040: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x283040u;
    {
        const bool branch_taken_0x283040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283040u;
            // 0x283044: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283040) {
            ctx->pc = 0x283024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283024;
        }
    }
    ctx->pc = 0x283048u;
    // 0x283048: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x283048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28304c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28304cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283050: 0xae022aac  sw          $v0, 0x2AAC($s0)
    ctx->pc = 0x283050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10924), GPR_U32(ctx, 2));
    // 0x283054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283054u;
    {
        const bool branch_taken_0x283054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283054u;
            // 0x283058: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283054) {
            ctx->pc = 0x28306Cu;
            goto label_28306c;
        }
    }
    ctx->pc = 0x28305Cu;
label_28305c:
    // 0x28305c: 0xc0a0b6c  jal         func_282DB0
    ctx->pc = 0x28305Cu;
    SET_GPR_U32(ctx, 31, 0x283064u);
    ctx->pc = 0x283060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28305Cu;
            // 0x283060: 0x24442ab0  addiu       $a0, $v0, 0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DB0u;
    if (runtime->hasFunction(0x282DB0u)) {
        auto targetFn = runtime->lookupFunction(0x282DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283064u; }
        if (ctx->pc != 0x283064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneEffectFv_0x282db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283064u; }
        if (ctx->pc != 0x283064u) { return; }
    }
    ctx->pc = 0x283064u;
label_283064:
    // 0x283064: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x283064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x283068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x283068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28306c:
    // 0x28306c: 0x0  nop
    ctx->pc = 0x28306cu;
    // NOP
    // 0x283070: 0x8e022aac  lw          $v0, 0x2AAC($s0)
    ctx->pc = 0x283070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10924)));
    // 0x283074: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x283074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283078: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x283078u;
    {
        const bool branch_taken_0x283078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283078u;
            // 0x28307c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283078) {
            ctx->pc = 0x28305Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28305c;
        }
    }
    ctx->pc = 0x283080u;
    // 0x283080: 0x260423d0  addiu       $a0, $s0, 0x23D0
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9168));
    // 0x283084: 0xc05a434  jal         func_1690D0
    ctx->pc = 0x283084u;
    SET_GPR_U32(ctx, 31, 0x28308Cu);
    ctx->pc = 0x283088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283084u;
            // 0x283088: 0xae002ca0  sw          $zero, 0x2CA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690D0u;
    if (runtime->hasFunction(0x1690D0u)) {
        auto targetFn = runtime->lookupFunction(0x1690D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28308Cu; }
        if (ctx->pc != 0x28308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMdsListSetFv_0x1690d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28308Cu; }
        if (ctx->pc != 0x28308Cu) { return; }
    }
    ctx->pc = 0x28308Cu;
label_28308c:
    // 0x28308c: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x28308Cu;
    SET_GPR_U32(ctx, 31, 0x283094u);
    ctx->pc = 0x283090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28308Cu;
            // 0x283090: 0x26042c70  addiu       $a0, $s0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283094u; }
        if (ctx->pc != 0x283094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283094u; }
        if (ctx->pc != 0x283094u) { return; }
    }
    ctx->pc = 0x283094u;
label_283094:
    // 0x283094: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x283094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283098: 0x3c023a66  lui         $v0, 0x3A66
    ctx->pc = 0x283098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14950 << 16));
    // 0x28309c: 0xae032e50  sw          $v1, 0x2E50($s0)
    ctx->pc = 0x28309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11856), GPR_U32(ctx, 3));
    // 0x2830a0: 0x3442afcd  ori         $v0, $v0, 0xAFCD
    ctx->pc = 0x2830a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45005);
    // 0x2830a4: 0xae032e54  sw          $v1, 0x2E54($s0)
    ctx->pc = 0x2830a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
    // 0x2830a8: 0x260424f0  addiu       $a0, $s0, 0x24F0
    ctx->pc = 0x2830a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9456));
    // 0x2830ac: 0xae032e58  sw          $v1, 0x2E58($s0)
    ctx->pc = 0x2830acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11864), GPR_U32(ctx, 3));
    // 0x2830b0: 0xae032e5c  sw          $v1, 0x2E5C($s0)
    ctx->pc = 0x2830b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11868), GPR_U32(ctx, 3));
    // 0x2830b4: 0xae002e78  sw          $zero, 0x2E78($s0)
    ctx->pc = 0x2830b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11896), GPR_U32(ctx, 0));
    // 0x2830b8: 0xae002e74  sw          $zero, 0x2E74($s0)
    ctx->pc = 0x2830b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11892), GPR_U32(ctx, 0));
    // 0x2830bc: 0xae002e70  sw          $zero, 0x2E70($s0)
    ctx->pc = 0x2830bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11888), GPR_U32(ctx, 0));
    // 0x2830c0: 0xae002e7c  sw          $zero, 0x2E7C($s0)
    ctx->pc = 0x2830c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11900), GPR_U32(ctx, 0));
    // 0x2830c4: 0xae002e80  sw          $zero, 0x2E80($s0)
    ctx->pc = 0x2830c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11904), GPR_U32(ctx, 0));
    // 0x2830c8: 0xae032e84  sw          $v1, 0x2E84($s0)
    ctx->pc = 0x2830c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11908), GPR_U32(ctx, 3));
    // 0x2830cc: 0xae022f70  sw          $v0, 0x2F70($s0)
    ctx->pc = 0x2830ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12144), GPR_U32(ctx, 2));
    // 0x2830d0: 0xc0611f0  jal         func_1847C0
    ctx->pc = 0x2830D0u;
    SET_GPR_U32(ctx, 31, 0x2830D8u);
    ctx->pc = 0x2830D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2830D0u;
            // 0x2830d4: 0xae002f74  sw          $zero, 0x2F74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847C0u;
    if (runtime->hasFunction(0x1847C0u)) {
        auto targetFn = runtime->lookupFunction(0x1847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830D8u; }
        if (ctx->pc != 0x2830D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CFireRasterFv_0x1847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830D8u; }
        if (ctx->pc != 0x2830D8u) { return; }
    }
    ctx->pc = 0x2830D8u;
label_2830d8:
    // 0x2830d8: 0xc061208  jal         func_184820
    ctx->pc = 0x2830D8u;
    SET_GPR_U32(ctx, 31, 0x2830E0u);
    ctx->pc = 0x2830DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2830D8u;
            // 0x2830dc: 0x26043e70  addiu       $a0, $s0, 0x3E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184820u;
    if (runtime->hasFunction(0x184820u)) {
        auto targetFn = runtime->lookupFunction(0x184820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830E0u; }
        if (ctx->pc != 0x2830E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__14CThunderEffectFv_0x184820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830E0u; }
        if (ctx->pc != 0x2830E0u) { return; }
    }
    ctx->pc = 0x2830E0u;
label_2830e0:
    // 0x2830e0: 0x26042fa4  addiu       $a0, $s0, 0x2FA4
    ctx->pc = 0x2830e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12196));
    // 0x2830e4: 0xc0be330  jal         func_2F8CC0
    ctx->pc = 0x2830E4u;
    SET_GPR_U32(ctx, 31, 0x2830ECu);
    ctx->pc = 0x2830E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2830E4u;
            // 0x2830e8: 0xae002f64  sw          $zero, 0x2F64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8CC0u;
    if (runtime->hasFunction(0x2F8CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F8CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830ECu; }
        if (ctx->pc != 0x2830ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CDngFloorManagerFv_0x2f8cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830ECu; }
        if (ctx->pc != 0x2830ECu) { return; }
    }
    ctx->pc = 0x2830ECu;
label_2830ec:
    // 0x2830ec: 0xae002f90  sw          $zero, 0x2F90($s0)
    ctx->pc = 0x2830ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12176), GPR_U32(ctx, 0));
    // 0x2830f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2830f4: 0xae002f94  sw          $zero, 0x2F94($s0)
    ctx->pc = 0x2830f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12180), GPR_U32(ctx, 0));
    // 0x2830f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2830fc: 0xae032ffc  sw          $v1, 0x2FFC($s0)
    ctx->pc = 0x2830fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12284), GPR_U32(ctx, 3));
    // 0x283100: 0x26042f80  addiu       $a0, $s0, 0x2F80
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12160));
    // 0x283104: 0xae002f94  sw          $zero, 0x2F94($s0)
    ctx->pc = 0x283104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12180), GPR_U32(ctx, 0));
    // 0x283108: 0xa6003008  sh          $zero, 0x3008($s0)
    ctx->pc = 0x283108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12296), (uint16_t)GPR_U32(ctx, 0));
    // 0x28310c: 0xae00300c  sw          $zero, 0x300C($s0)
    ctx->pc = 0x28310cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12300), GPR_U32(ctx, 0));
    // 0x283110: 0xae003010  sw          $zero, 0x3010($s0)
    ctx->pc = 0x283110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12304), GPR_U32(ctx, 0));
    // 0x283114: 0xa2002fb4  sb          $zero, 0x2FB4($s0)
    ctx->pc = 0x283114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12212), (uint8_t)GPR_U32(ctx, 0));
    // 0x283118: 0xa6022fd4  sh          $v0, 0x2FD4($s0)
    ctx->pc = 0x283118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12244), (uint16_t)GPR_U32(ctx, 2));
    // 0x28311c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x28311Cu;
    SET_GPR_U32(ctx, 31, 0x283124u);
    ctx->pc = 0x283120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28311Cu;
            // 0x283120: 0xae002f78  sw          $zero, 0x2F78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283124u; }
        if (ctx->pc != 0x283124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283124u; }
        if (ctx->pc != 0x283124u) { return; }
    }
    ctx->pc = 0x283124u;
label_283124:
    // 0x283124: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x283124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283128: 0xae033e60  sw          $v1, 0x3E60($s0)
    ctx->pc = 0x283128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15968), GPR_U32(ctx, 3));
    // 0x28312c: 0xae033e64  sw          $v1, 0x3E64($s0)
    ctx->pc = 0x28312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15972), GPR_U32(ctx, 3));
    // 0x283130: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28313c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28313cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283140: 0x3e00008  jr          $ra
    ctx->pc = 0x283140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283140u;
            // 0x283144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283148u;
}
