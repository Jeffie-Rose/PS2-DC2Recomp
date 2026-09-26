#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFIX_CAMERA_POS2__FP9SPI_STACKi
// Address: 0x162ff0 - 0x1630b0
void mapFIX_CAMERA_POS2__FP9SPI_STACKi_0x162ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFIX_CAMERA_POS2__FP9SPI_STACKi_0x162ff0");
#endif

    switch (ctx->pc) {
        case 0x16300cu: goto label_16300c;
        case 0x163028u: goto label_163028;
        case 0x163048u: goto label_163048;
        case 0x163080u: goto label_163080;
        default: break;
    }

    ctx->pc = 0x162ff0u;

    // 0x162ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163004: 0xc058720  jal         func_161C80
    ctx->pc = 0x163004u;
    SET_GPR_U32(ctx, 31, 0x16300Cu);
    ctx->pc = 0x163008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163004u;
            // 0x163008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16300Cu; }
        if (ctx->pc != 0x16300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16300Cu; }
        if (ctx->pc != 0x16300Cu) { return; }
    }
    ctx->pc = 0x16300Cu;
label_16300c:
    // 0x16300c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16300Cu;
    {
        const bool branch_taken_0x16300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16300c) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x163014u;
    // 0x163014: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x163014u;
    {
        const bool branch_taken_0x163014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163014u;
            // 0x163018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163014) {
            ctx->pc = 0x163098u;
            goto label_163098;
        }
    }
    ctx->pc = 0x16301Cu;
label_16301c:
    // 0x16301c: 0x8f858934  lw          $a1, -0x76CC($gp)
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
    // 0x163020: 0xc0572fc  jal         func_15CBF0
    ctx->pc = 0x163020u;
    SET_GPR_U32(ctx, 31, 0x163028u);
    ctx->pc = 0x163024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163020u;
            // 0x163024: 0x8f848914  lw          $a0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBF0u;
    if (runtime->hasFunction(0x15CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163028u; }
        if (ctx->pc != 0x163028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraInfo__4CMapFi_0x15cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163028u; }
        if (ctx->pc != 0x163028u) { return; }
    }
    ctx->pc = 0x163028u;
label_163028:
    // 0x163028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16302c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16302Cu;
    {
        const bool branch_taken_0x16302c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16302Cu;
            // 0x163030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16302c) {
            ctx->pc = 0x163040u;
            goto label_163040;
        }
    }
    ctx->pc = 0x163034u;
    // 0x163034: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x163034u;
    {
        const bool branch_taken_0x163034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163034u;
            // 0x163038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163034) {
            ctx->pc = 0x163098u;
            goto label_163098;
        }
    }
    ctx->pc = 0x16303Cu;
    // 0x16303c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16303cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163040:
    // 0x163040: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163040u;
    SET_GPR_U32(ctx, 31, 0x163048u);
    ctx->pc = 0x163044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163040u;
            // 0x163044: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163048u; }
        if (ctx->pc != 0x163048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163048u; }
        if (ctx->pc != 0x163048u) { return; }
    }
    ctx->pc = 0x163048u;
label_163048:
    // 0x163048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16304c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16304Cu;
    {
        const bool branch_taken_0x16304c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x163050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16304Cu;
            // 0x163050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16304c) {
            ctx->pc = 0x163064u;
            goto label_163064;
        }
    }
    ctx->pc = 0x163054u;
    // 0x163054: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x163058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163058u;
    {
        const bool branch_taken_0x163058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163058u;
            // 0x16305c: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163058) {
            ctx->pc = 0x163070u;
            goto label_163070;
        }
    }
    ctx->pc = 0x163060u;
    // 0x163060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163064:
    // 0x163064: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163064u;
    {
        const bool branch_taken_0x163064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163064u;
            // 0x163068: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163064) {
            ctx->pc = 0x16309Cu;
            goto label_16309c;
        }
    }
    ctx->pc = 0x16306Cu;
    // 0x16306c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x16306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_163070:
    // 0x163070: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163074: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163078: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163078u;
    SET_GPR_U32(ctx, 31, 0x163080u);
    ctx->pc = 0x16307Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163078u;
            // 0x16307c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163080u; }
        if (ctx->pc != 0x163080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163080u; }
        if (ctx->pc != 0x163080u) { return; }
    }
    ctx->pc = 0x163080u;
label_163080:
    // 0x163080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163084: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x163088: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x163088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16308c: 0x41180a  movz        $v1, $v0, $at
    ctx->pc = 0x16308cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x163090: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x163090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x163094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163098:
    // 0x163098: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16309c:
    // 0x16309c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16309cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1630a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1630a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1630a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1630a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1630A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630A8u;
            // 0x1630ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1630B0u;
}
