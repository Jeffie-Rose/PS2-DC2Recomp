#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMCIconData__FPUii
// Address: 0x2c4fb0 - 0x2c5070
void SetMCIconData__FPUii_0x2c4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMCIconData__FPUii_0x2c4fb0");
#endif

    switch (ctx->pc) {
        case 0x2c4fe4u: goto label_2c4fe4;
        case 0x2c5014u: goto label_2c5014;
        case 0x2c502cu: goto label_2c502c;
        case 0x2c5050u: goto label_2c5050;
        default: break;
    }

    ctx->pc = 0x2c4fb0u;

    // 0x2c4fb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2c4fb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4fb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c4fbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4fc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4fc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4fc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4fd4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2c4fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2c4fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4fdc: 0x24a55220  addiu       $a1, $a1, 0x5220
    ctx->pc = 0x2c4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
    // 0x2c4fe0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c4fe4:
    // 0x2c4fe4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c4fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4fe8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c4fec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2c4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2c4ff0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2c4ff4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2c4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c4ff8: 0x0  nop
    ctx->pc = 0x2c4ff8u;
    // NOP
    // 0x2c4ffc: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C4FFCu;
    {
        const bool branch_taken_0x2c4ffc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2c4ffc) {
            ctx->pc = 0x2C4FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4fe4;
        }
    }
    ctx->pc = 0x2C5004u;
    // 0x2c5004: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2c5004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c5008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c500c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c500cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5010: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2c5010u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2c5014:
    // 0x2c5014: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2c5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2c5018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c501c: 0x24540060  addiu       $s4, $v0, 0x60
    ctx->pc = 0x2c501cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2c5020: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c5020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5024: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C5024u;
    SET_GPR_U32(ctx, 31, 0x2C502Cu);
    ctx->pc = 0x2C5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5024u;
            // 0x2c5028: 0x26860024  addiu       $a2, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C502Cu; }
        if (ctx->pc != 0x2C502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C502Cu; }
        if (ctx->pc != 0x2C502Cu) { return; }
    }
    ctx->pc = 0x2C502Cu;
label_2c502c:
    // 0x2c502c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x2c502cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x2c5030: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c5034: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2c5034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c5038: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C5038u;
    {
        const bool branch_taken_0x2c5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5038u;
            // 0x2c503c: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5038) {
            ctx->pc = 0x2C5014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c5014;
        }
    }
    ctx->pc = 0x2C5040u;
    // 0x2c5040: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c5044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5048: 0xc0bc680  jal         func_2F1A00
    ctx->pc = 0x2C5048u;
    SET_GPR_U32(ctx, 31, 0x2C5050u);
    ctx->pc = 0x2C504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5048u;
            // 0x2c504c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A00u;
    if (runtime->hasFunction(0x2F1A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5050u; }
        if (ctx->pc != 0x2C5050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi_0x2f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5050u; }
        if (ctx->pc != 0x2C5050u) { return; }
    }
    ctx->pc = 0x2C5050u;
label_2c5050:
    // 0x2c5050: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c5050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5054: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c505c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c505cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5068: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5068u;
            // 0x2c506c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5070u;
}
