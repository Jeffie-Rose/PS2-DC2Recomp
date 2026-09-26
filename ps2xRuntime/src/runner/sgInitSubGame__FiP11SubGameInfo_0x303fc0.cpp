#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgInitSubGame__FiP11SubGameInfo
// Address: 0x303fc0 - 0x304114
void sgInitSubGame__FiP11SubGameInfo_0x303fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgInitSubGame__FiP11SubGameInfo_0x303fc0");
#endif

    switch (ctx->pc) {
        case 0x3040d4u: goto label_3040d4;
        case 0x3040e8u: goto label_3040e8;
        case 0x3040fcu: goto label_3040fc;
        default: break;
    }

    ctx->pc = 0x303fc0u;

    // 0x303fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303fc8: 0xaf80a108  sw          $zero, -0x5EF8($gp)
    ctx->pc = 0x303fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 0));
    // 0x303fcc: 0xaf80a10c  sw          $zero, -0x5EF4($gp)
    ctx->pc = 0x303fccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942988), GPR_U32(ctx, 0));
    // 0x303fd0: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303FD0u;
    {
        const bool branch_taken_0x303fd0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x303FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FD0u;
            // 0x303fd4: 0xaf84a104  sw          $a0, -0x5EFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fd0) {
            ctx->pc = 0x303FE4u;
            goto label_303fe4;
        }
    }
    ctx->pc = 0x303FD8u;
    // 0x303fd8: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x303fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x303fdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303FDCu;
    {
        const bool branch_taken_0x303fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303fdc) {
            ctx->pc = 0x303FECu;
            goto label_303fec;
        }
    }
    ctx->pc = 0x303FE4u;
label_303fe4:
    // 0x303fe4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x303FE4u;
    {
        const bool branch_taken_0x303fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FE4u;
            // 0x303fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fe4) {
            ctx->pc = 0x304108u;
            goto label_304108;
        }
    }
    ctx->pc = 0x303FECu;
label_303fec:
    // 0x303fec: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x303fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303ff0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x303ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x303ff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x303ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ffc: 0xac269e30  sw          $a2, -0x61D0($at)
    ctx->pc = 0x303ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942256), GPR_U32(ctx, 6));
    // 0x304000: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304004: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x304004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x304008: 0x8c269e30  lw          $a2, -0x61D0($at)
    ctx->pc = 0x304008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942256)));
    // 0x30400c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30400cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304010: 0xac279e34  sw          $a3, -0x61CC($at)
    ctx->pc = 0x304010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942260), GPR_U32(ctx, 7));
    // 0x304014: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x304014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x304018: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30401c: 0xac279e38  sw          $a3, -0x61C8($at)
    ctx->pc = 0x30401cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942264), GPR_U32(ctx, 7));
    // 0x304020: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x304024: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304028: 0xac279e3c  sw          $a3, -0x61C4($at)
    ctx->pc = 0x304028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942268), GPR_U32(ctx, 7));
    // 0x30402c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x304030: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304034: 0xac279e40  sw          $a3, -0x61C0($at)
    ctx->pc = 0x304034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942272), GPR_U32(ctx, 7));
    // 0x304038: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x304038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x30403c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30403cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304040: 0xac279e44  sw          $a3, -0x61BC($at)
    ctx->pc = 0x304040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942276), GPR_U32(ctx, 7));
    // 0x304044: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x304044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x304048: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30404c: 0xac279e48  sw          $a3, -0x61B8($at)
    ctx->pc = 0x30404cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942280), GPR_U32(ctx, 7));
    // 0x304050: 0x8ca7001c  lw          $a3, 0x1C($a1)
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x304054: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304058: 0xac279e4c  sw          $a3, -0x61B4($at)
    ctx->pc = 0x304058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942284), GPR_U32(ctx, 7));
    // 0x30405c: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x30405cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x304060: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304064: 0xac279e50  sw          $a3, -0x61B0($at)
    ctx->pc = 0x304064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942288), GPR_U32(ctx, 7));
    // 0x304068: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x304068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30406c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304070: 0xac279e54  sw          $a3, -0x61AC($at)
    ctx->pc = 0x304070u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942292), GPR_U32(ctx, 7));
    // 0x304074: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x304074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x304078: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30407c: 0xac279e58  sw          $a3, -0x61A8($at)
    ctx->pc = 0x30407cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942296), GPR_U32(ctx, 7));
    // 0x304080: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x304080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x304084: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304088: 0xac259e5c  sw          $a1, -0x61A4($at)
    ctx->pc = 0x304088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942300), GPR_U32(ctx, 5));
    // 0x30408c: 0x8cc53e68  lw          $a1, 0x3E68($a2)
    ctx->pc = 0x30408cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15976)));
    // 0x304090: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x304090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x304094: 0xac259e34  sw          $a1, -0x61CC($at)
    ctx->pc = 0x304094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942260), GPR_U32(ctx, 5));
    // 0x304098: 0x8cc53e6c  lw          $a1, 0x3E6C($a2)
    ctx->pc = 0x304098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15980)));
    // 0x30409c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30409cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3040a0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3040A0u;
    {
        const bool branch_taken_0x3040a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3040A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3040A0u;
            // 0x3040a4: 0xac259e38  sw          $a1, -0x61C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040a0) {
            ctx->pc = 0x3040FCu;
            goto label_3040fc;
        }
    }
    ctx->pc = 0x3040A8u;
    // 0x3040a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3040a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3040ac: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3040ACu;
    {
        const bool branch_taken_0x3040ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3040B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3040ACu;
            // 0x3040b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040ac) {
            ctx->pc = 0x3040F0u;
            goto label_3040f0;
        }
    }
    ctx->pc = 0x3040B4u;
    // 0x3040b4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3040B4u;
    {
        const bool branch_taken_0x3040b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3040B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3040B4u;
            // 0x3040b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040b4) {
            ctx->pc = 0x3040DCu;
            goto label_3040dc;
        }
    }
    ctx->pc = 0x3040BCu;
    // 0x3040bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3040BCu;
    {
        const bool branch_taken_0x3040bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3040C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3040BCu;
            // 0x3040c0: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040bc) {
            ctx->pc = 0x3040CCu;
            goto label_3040cc;
        }
    }
    ctx->pc = 0x3040C4u;
    // 0x3040c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3040C4u;
    {
        const bool branch_taken_0x3040c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040c4) {
            ctx->pc = 0x3040FCu;
            goto label_3040fc;
        }
    }
    ctx->pc = 0x3040CCu;
label_3040cc:
    // 0x3040cc: 0xc0bf1d8  jal         func_2FC760
    ctx->pc = 0x3040CCu;
    SET_GPR_U32(ctx, 31, 0x3040D4u);
    ctx->pc = 0x3040D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3040CCu;
            // 0x3040d0: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC760u;
    if (runtime->hasFunction(0x2FC760u)) {
        auto targetFn = runtime->lookupFunction(0x2FC760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040D4u; }
        if (ctx->pc != 0x3040D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitFishing__FP11SubGameInfo_0x2fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040D4u; }
        if (ctx->pc != 0x3040D4u) { return; }
    }
    ctx->pc = 0x3040D4u;
label_3040d4:
    // 0x3040d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3040D4u;
    {
        const bool branch_taken_0x3040d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040d4) {
            ctx->pc = 0x3040FCu;
            goto label_3040fc;
        }
    }
    ctx->pc = 0x3040DCu;
label_3040dc:
    // 0x3040dc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3040e0: 0xc0c122c  jal         func_3048B0
    ctx->pc = 0x3040E0u;
    SET_GPR_U32(ctx, 31, 0x3040E8u);
    ctx->pc = 0x3040E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3040E0u;
            // 0x3040e4: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3048B0u;
    if (runtime->hasFunction(0x3048B0u)) {
        auto targetFn = runtime->lookupFunction(0x3048B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040E8u; }
        if (ctx->pc != 0x3040E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitGyoRace__FP11SubGameInfo_0x3048b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040E8u; }
        if (ctx->pc != 0x3040E8u) { return; }
    }
    ctx->pc = 0x3040E8u;
label_3040e8:
    // 0x3040e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3040E8u;
    {
        const bool branch_taken_0x3040e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040e8) {
            ctx->pc = 0x3040FCu;
            goto label_3040fc;
        }
    }
    ctx->pc = 0x3040F0u;
label_3040f0:
    // 0x3040f0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3040f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3040f4: 0xc0c4ddc  jal         func_313770
    ctx->pc = 0x3040F4u;
    SET_GPR_U32(ctx, 31, 0x3040FCu);
    ctx->pc = 0x3040F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3040F4u;
            // 0x3040f8: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313770u;
    if (runtime->hasFunction(0x313770u)) {
        auto targetFn = runtime->lookupFunction(0x313770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040FCu; }
        if (ctx->pc != 0x3040FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitBuggy__FP11SubGameInfo_0x313770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040FCu; }
        if (ctx->pc != 0x3040FCu) { return; }
    }
    ctx->pc = 0x3040FCu;
label_3040fc:
    // 0x3040fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3040FCu;
    {
        const bool branch_taken_0x3040fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040fc) {
            ctx->pc = 0x304108u;
            goto label_304108;
        }
    }
    ctx->pc = 0x304104u;
    // 0x304104: 0xaf80a104  sw          $zero, -0x5EFC($gp)
    ctx->pc = 0x304104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 0));
label_304108:
    // 0x304108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30410c: 0x3e00008  jr          $ra
    ctx->pc = 0x30410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30410Cu;
            // 0x304110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304114u;
}
