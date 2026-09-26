#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFramePos__10CEohMotherFiPcPf
// Address: 0x25f340 - 0x25f3e4
void GetFramePos__10CEohMotherFiPcPf_0x25f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFramePos__10CEohMotherFiPcPf_0x25f340");
#endif

    switch (ctx->pc) {
        case 0x25f3b0u: goto label_25f3b0;
        case 0x25f3c8u: goto label_25f3c8;
        case 0x25f3d0u: goto label_25f3d0;
        default: break;
    }

    ctx->pc = 0x25f340u;

    // 0x25f340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f34c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F34Cu;
    {
        const bool branch_taken_0x25f34c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F34Cu;
            // 0x25f350: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f34c) {
            ctx->pc = 0x25F360u;
            goto label_25f360;
        }
    }
    ctx->pc = 0x25F354u;
    // 0x25f354: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F358u;
    {
        const bool branch_taken_0x25f358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F358u;
            // 0x25f35c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f358) {
            ctx->pc = 0x25F368u;
            goto label_25f368;
        }
    }
    ctx->pc = 0x25F360u;
label_25f360:
    // 0x25f360: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25F360u;
    {
        const bool branch_taken_0x25f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F360u;
            // 0x25f364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f360) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F368u;
label_25f368:
    // 0x25f368: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f36c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F370u;
    {
        const bool branch_taken_0x25f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f370) {
            ctx->pc = 0x25F380u;
            goto label_25f380;
        }
    }
    ctx->pc = 0x25F378u;
    // 0x25f378: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25F378u;
    {
        const bool branch_taken_0x25f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F378u;
            // 0x25f37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f378) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F380u;
label_25f380:
    // 0x25f380: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F384u;
    {
        const bool branch_taken_0x25f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f384) {
            ctx->pc = 0x25F394u;
            goto label_25f394;
        }
    }
    ctx->pc = 0x25F38Cu;
    // 0x25f38c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25F38Cu;
    {
        const bool branch_taken_0x25f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F38Cu;
            // 0x25f390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f38c) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F394u;
label_25f394:
    // 0x25f394: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x25f394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25f398: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F398u;
    {
        const bool branch_taken_0x25f398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F398u;
            // 0x25f39c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f398) {
            ctx->pc = 0x25F3A8u;
            goto label_25f3a8;
        }
    }
    ctx->pc = 0x25F3A0u;
    // 0x25f3a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25F3A0u;
    {
        const bool branch_taken_0x25f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3A0u;
            // 0x25f3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3a0) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F3A8u;
label_25f3a8:
    // 0x25f3a8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25F3A8u;
    SET_GPR_U32(ctx, 31, 0x25F3B0u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3B0u; }
        if (ctx->pc != 0x25F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3B0u; }
        if (ctx->pc != 0x25F3B0u) { return; }
    }
    ctx->pc = 0x25F3B0u;
label_25f3b0:
    // 0x25f3b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F3B0u;
    {
        const bool branch_taken_0x25f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3B0u;
            // 0x25f3b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3b0) {
            ctx->pc = 0x25F3C0u;
            goto label_25f3c0;
        }
    }
    ctx->pc = 0x25F3B8u;
    // 0x25f3b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F3B8u;
    {
        const bool branch_taken_0x25f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3B8u;
            // 0x25f3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3b8) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F3C0u;
label_25f3c0:
    // 0x25f3c0: 0xc04de0c  jal         func_137830
    ctx->pc = 0x25F3C0u;
    SET_GPR_U32(ctx, 31, 0x25F3C8u);
    ctx->pc = 0x25F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3C0u;
            // 0x25f3c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3C8u; }
        if (ctx->pc != 0x25F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3C8u; }
        if (ctx->pc != 0x25F3C8u) { return; }
    }
    ctx->pc = 0x25F3C8u;
label_25f3c8:
    // 0x25f3c8: 0xc0975d8  jal         func_25D760
    ctx->pc = 0x25F3C8u;
    SET_GPR_U32(ctx, 31, 0x25F3D0u);
    ctx->pc = 0x25F3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3C8u;
            // 0x25f3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3D0u; }
        if (ctx->pc != 0x25F3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3D0u; }
        if (ctx->pc != 0x25F3D0u) { return; }
    }
    ctx->pc = 0x25F3D0u;
label_25f3d0:
    // 0x25f3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f3d4:
    // 0x25f3d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25F3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3DCu;
            // 0x25f3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F3E4u;
}
