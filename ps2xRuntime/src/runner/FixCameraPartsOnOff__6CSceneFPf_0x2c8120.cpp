#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FixCameraPartsOnOff__6CSceneFPf
// Address: 0x2c8120 - 0x2c819c
void FixCameraPartsOnOff__6CSceneFPf_0x2c8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FixCameraPartsOnOff__6CSceneFPf_0x2c8120");
#endif

    switch (ctx->pc) {
        case 0x2c8148u: goto label_2c8148;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c816cu: goto label_2c816c;
        default: break;
    }

    ctx->pc = 0x2c8120u;

    // 0x2c8120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c8124: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c8124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8128: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c812c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c8130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c8134: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c8134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c813c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c8140: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2C8140u;
    SET_GPR_U32(ctx, 31, 0x2C8148u);
    ctx->pc = 0x2C8144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8140u;
            // 0x2c8144: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8148u; }
        if (ctx->pc != 0x2C8148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8148u; }
        if (ctx->pc != 0x2C8148u) { return; }
    }
    ctx->pc = 0x2C8148u;
label_2c8148:
    // 0x2c8148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c814c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2c814cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c8150: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8150u;
    {
        const bool branch_taken_0x2c8150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8150u;
            // 0x2c8154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8150) {
            ctx->pc = 0x2C817Cu;
            goto label_2c817c;
        }
    }
    ctx->pc = 0x2C8158u;
    // 0x2c8158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c8158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c815c:
    // 0x2c815c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2c8160: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2c8160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c8164: 0xc057dcc  jal         func_15F730
    ctx->pc = 0x2C8164u;
    SET_GPR_U32(ctx, 31, 0x2C816Cu);
    ctx->pc = 0x2C8168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8164u;
            // 0x2c8168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F730u;
    if (runtime->hasFunction(0x15F730u)) {
        auto targetFn = runtime->lookupFunction(0x15F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C816Cu; }
        if (ctx->pc != 0x2C816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FixCameraPartsOnOff__4CMapFPf_0x15f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C816Cu; }
        if (ctx->pc != 0x2C816Cu) { return; }
    }
    ctx->pc = 0x2C816Cu;
label_2c816c:
    // 0x2c816c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c816cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c8170: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x2c8170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c8174: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C8174u;
    {
        const bool branch_taken_0x2c8174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8174u;
            // 0x2c8178: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8174) {
            ctx->pc = 0x2C815Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c815c;
        }
    }
    ctx->pc = 0x2C817Cu;
label_2c817c:
    // 0x2c817c: 0x0  nop
    ctx->pc = 0x2c817cu;
    // NOP
    // 0x2c8180: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c818c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8194: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8194u;
            // 0x2c8198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C819Cu;
}
