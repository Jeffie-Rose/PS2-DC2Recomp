#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFIX_CAMERA_OFF_GROUP__FP9SPI_STACKi
// Address: 0x1630b0 - 0x163184
void mapFIX_CAMERA_OFF_GROUP__FP9SPI_STACKi_0x1630b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFIX_CAMERA_OFF_GROUP__FP9SPI_STACKi_0x1630b0");
#endif

    switch (ctx->pc) {
        case 0x1630c8u: goto label_1630c8;
        case 0x1630e0u: goto label_1630e0;
        case 0x1630f0u: goto label_1630f0;
        case 0x163108u: goto label_163108;
        case 0x163124u: goto label_163124;
        case 0x163154u: goto label_163154;
        case 0x163164u: goto label_163164;
        default: break;
    }

    ctx->pc = 0x1630b0u;

    // 0x1630b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1630b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1630b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1630b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1630b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1630bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1630bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1630c0: 0xc058720  jal         func_161C80
    ctx->pc = 0x1630C0u;
    SET_GPR_U32(ctx, 31, 0x1630C8u);
    ctx->pc = 0x1630C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1630C0u;
            // 0x1630c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630C8u; }
        if (ctx->pc != 0x1630C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630C8u; }
        if (ctx->pc != 0x1630C8u) { return; }
    }
    ctx->pc = 0x1630C8u;
label_1630c8:
    // 0x1630c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1630C8u;
    {
        const bool branch_taken_0x1630c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630C8u;
            // 0x1630cc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630c8) {
            ctx->pc = 0x1630D8u;
            goto label_1630d8;
        }
    }
    ctx->pc = 0x1630D0u;
    // 0x1630d0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1630D0u;
    {
        const bool branch_taken_0x1630d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630D0u;
            // 0x1630d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630d0) {
            ctx->pc = 0x16316Cu;
            goto label_16316c;
        }
    }
    ctx->pc = 0x1630D8u;
label_1630d8:
    // 0x1630d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1630D8u;
    SET_GPR_U32(ctx, 31, 0x1630E0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630E0u; }
        if (ctx->pc != 0x1630E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630E0u; }
        if (ctx->pc != 0x1630E0u) { return; }
    }
    ctx->pc = 0x1630E0u;
label_1630e0:
    // 0x1630e0: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x1630e4: 0x8f858934  lw          $a1, -0x76CC($gp)
    ctx->pc = 0x1630e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
    // 0x1630e8: 0xc0572fc  jal         func_15CBF0
    ctx->pc = 0x1630E8u;
    SET_GPR_U32(ctx, 31, 0x1630F0u);
    ctx->pc = 0x1630ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1630E8u;
            // 0x1630ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBF0u;
    if (runtime->hasFunction(0x15CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630F0u; }
        if (ctx->pc != 0x1630F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraInfo__4CMapFi_0x15cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630F0u; }
        if (ctx->pc != 0x1630F0u) { return; }
    }
    ctx->pc = 0x1630F0u;
label_1630f0:
    // 0x1630f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1630F0u;
    {
        const bool branch_taken_0x1630f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630F0u;
            // 0x1630f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630f0) {
            ctx->pc = 0x163100u;
            goto label_163100;
        }
    }
    ctx->pc = 0x1630F8u;
    // 0x1630f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1630F8u;
    {
        const bool branch_taken_0x1630f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630F8u;
            // 0x1630fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630f8) {
            ctx->pc = 0x16316Cu;
            goto label_16316c;
        }
    }
    ctx->pc = 0x163100u;
label_163100:
    // 0x163100: 0xc0593c4  jal         func_164F10
    ctx->pc = 0x163100u;
    SET_GPR_U32(ctx, 31, 0x163108u);
    ctx->pc = 0x163104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163100u;
            // 0x163104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F10u;
    if (runtime->hasFunction(0x164F10u)) {
        auto targetFn = runtime->lookupFunction(0x164F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163108u; }
        if (ctx->pc != 0x163108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawInfo__11CCameraInfoFi_0x164f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163108u; }
        if (ctx->pc != 0x163108u) { return; }
    }
    ctx->pc = 0x163108u;
label_163108:
    // 0x163108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16310c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16310Cu;
    {
        const bool branch_taken_0x16310c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16310Cu;
            // 0x163110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16310c) {
            ctx->pc = 0x16311Cu;
            goto label_16311c;
        }
    }
    ctx->pc = 0x163114u;
    // 0x163114: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x163114u;
    {
        const bool branch_taken_0x163114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163114u;
            // 0x163118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163114) {
            ctx->pc = 0x16316Cu;
            goto label_16316c;
        }
    }
    ctx->pc = 0x16311Cu;
label_16311c:
    // 0x16311c: 0xc05191c  jal         func_146470
    ctx->pc = 0x16311Cu;
    SET_GPR_U32(ctx, 31, 0x163124u);
    ctx->pc = 0x163120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16311Cu;
            // 0x163120: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163124u; }
        if (ctx->pc != 0x163124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163124u; }
        if (ctx->pc != 0x163124u) { return; }
    }
    ctx->pc = 0x163124u;
label_163124:
    // 0x163124: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163128: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163128u;
    {
        const bool branch_taken_0x163128 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163128u;
            // 0x16312c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163128) {
            ctx->pc = 0x163138u;
            goto label_163138;
        }
    }
    ctx->pc = 0x163130u;
    // 0x163130: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x163130u;
    {
        const bool branch_taken_0x163130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163130u;
            // 0x163134: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163130) {
            ctx->pc = 0x163170u;
            goto label_163170;
        }
    }
    ctx->pc = 0x163138u;
label_163138:
    // 0x163138: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x163138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16313c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16313Cu;
    {
        const bool branch_taken_0x16313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16313Cu;
            // 0x163140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16313c) {
            ctx->pc = 0x16314Cu;
            goto label_16314c;
        }
    }
    ctx->pc = 0x163144u;
    // 0x163144: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163144u;
    {
        const bool branch_taken_0x163144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163144u;
            // 0x163148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163144) {
            ctx->pc = 0x16316Cu;
            goto label_16316c;
        }
    }
    ctx->pc = 0x16314Cu;
label_16314c:
    // 0x16314c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x16314Cu;
    SET_GPR_U32(ctx, 31, 0x163154u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163154u; }
        if (ctx->pc != 0x163154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163154u; }
        if (ctx->pc != 0x163154u) { return; }
    }
    ctx->pc = 0x163154u;
label_163154:
    // 0x163154: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x163154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x163158: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16315c: 0xc0571e0  jal         func_15C780
    ctx->pc = 0x16315Cu;
    SET_GPR_U32(ctx, 31, 0x163164u);
    ctx->pc = 0x163160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16315Cu;
            // 0x163160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C780u;
    if (runtime->hasFunction(0x15C780u)) {
        auto targetFn = runtime->lookupFunction(0x15C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163164u; }
        if (ctx->pc != 0x163164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroupNo__4CMapFPc_0x15c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163164u; }
        if (ctx->pc != 0x163164u) { return; }
    }
    ctx->pc = 0x163164u;
label_163164:
    // 0x163164: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x163164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x163168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16316c:
    // 0x16316c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163170:
    // 0x163170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16317c: 0x3e00008  jr          $ra
    ctx->pc = 0x16317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16317Cu;
            // 0x163180: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163184u;
}
