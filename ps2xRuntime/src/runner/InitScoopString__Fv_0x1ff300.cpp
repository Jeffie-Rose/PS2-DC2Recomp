#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitScoopString__Fv
// Address: 0x1ff300 - 0x1ff3c8
void InitScoopString__Fv_0x1ff300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitScoopString__Fv_0x1ff300");
#endif

    switch (ctx->pc) {
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff3a0u: goto label_1ff3a0;
        default: break;
    }

    ctx->pc = 0x1ff300u;

    // 0x1ff300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff308: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1ff30c: 0x2484e9c0  addiu       $a0, $a0, -0x1640
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961600));
label_1ff310:
    // 0x1ff310: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1ff310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ff314: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff318: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1ff318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1ff31c: 0x28a3002d  slti        $v1, $a1, 0x2D
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1ff320: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1ff320u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1ff324: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1ff324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1ff328: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1ff328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1ff32c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x1ff32cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1ff330: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1ff330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1ff334: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x1ff334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x1ff338: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1ff338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1ff33c: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1ff33cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1ff340: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1ff340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1ff344: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x1ff344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x1ff348: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x1ff348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x1ff34c: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x1ff34cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x1ff350: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x1ff350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x1ff354: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x1ff354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x1ff358: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x1ff358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    // 0x1ff35c: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x1ff35cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x1ff360: 0xace00070  sw          $zero, 0x70($a3)
    ctx->pc = 0x1ff360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 0));
    // 0x1ff364: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x1ff364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x1ff368: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x1ff368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
    // 0x1ff36c: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x1ff36cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x1ff370: 0xace00088  sw          $zero, 0x88($a3)
    ctx->pc = 0x1ff370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 0));
    // 0x1ff374: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x1ff374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x1ff378: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x1ff378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x1ff37c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1FF37Cu;
    {
        const bool branch_taken_0x1ff37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF37Cu;
            // 0x1ff380: 0xace0009c  sw          $zero, 0x9C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff37c) {
            ctx->pc = 0x1FF310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff310;
        }
    }
    ctx->pc = 0x1FF384u;
    // 0x1ff384: 0x28a10035  slti        $at, $a1, 0x35
    ctx->pc = 0x1ff384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x1ff388: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF388u;
    {
        const bool branch_taken_0x1ff388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF388u;
            // 0x1ff38c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff388) {
            ctx->pc = 0x1FF3C0u;
            goto label_1ff3c0;
        }
    }
    ctx->pc = 0x1FF390u;
    // 0x1ff390: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ff390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ff394: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1ff394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff398: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1ff39c: 0x2484e9c0  addiu       $a0, $a0, -0x1640
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961600));
label_1ff3a0:
    // 0x1ff3a0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ff3a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff3a8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1ff3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1ff3ac: 0x28a30035  slti        $v1, $a1, 0x35
    ctx->pc = 0x1ff3acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x1ff3b0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1ff3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1ff3b4: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1ff3b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FF3B8u;
    {
        const bool branch_taken_0x1ff3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3B8u;
            // 0x1ff3bc: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3b8) {
            ctx->pc = 0x1FF3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff3a0;
        }
    }
    ctx->pc = 0x1FF3C0u;
label_1ff3c0:
    // 0x1ff3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF3C8u;
}
