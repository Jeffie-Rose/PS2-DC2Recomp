#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11sndPortInfoFv
// Address: 0x190680 - 0x19083c
void ps2___ct__11sndPortInfoFv_0x190680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11sndPortInfoFv_0x190680");
#endif

    switch (ctx->pc) {
        case 0x190688u: goto label_190688;
        case 0x1906bcu: goto label_1906bc;
        case 0x190704u: goto label_190704;
        case 0x190740u: goto label_190740;
        default: break;
    }

    ctx->pc = 0x190680u;

    // 0x190680: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x190684: 0x248301cc  addiu       $v1, $a0, 0x1CC
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 460));
label_190688:
    // 0x190688: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x190688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x19068c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x19068cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x190690: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x190694: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x190694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x190698: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x190698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x19069c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x19069cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1906a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1906a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1906a4: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1906a8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1906a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1906ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1906ACu;
    {
        const bool branch_taken_0x1906ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1906ACu;
            // 0x1906b0: 0x2486021c  addiu       $a2, $a0, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906ac) {
            ctx->pc = 0x190688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190688;
        }
    }
    ctx->pc = 0x1906B4u;
    // 0x1906b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1906b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1906b8: 0x2483029c  addiu       $v1, $a0, 0x29C
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 668));
label_1906bc:
    // 0x1906bc: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x1906bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1906c0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1906c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1906c4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1906c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1906c8: 0x0  nop
    ctx->pc = 0x1906c8u;
    // NOP
    // 0x1906cc: 0x0  nop
    ctx->pc = 0x1906ccu;
    // NOP
    // 0x1906d0: 0x0  nop
    ctx->pc = 0x1906d0u;
    // NOP
    // 0x1906d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x1906BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1906bc;
        }
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1906e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906e4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1906e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1906e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1906e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1906ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1906f0: 0xac85020c  sw          $a1, 0x20C($a0)
    ctx->pc = 0x1906f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 5));
    // 0x1906f4: 0xac800210  sw          $zero, 0x210($a0)
    ctx->pc = 0x1906f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 0));
    // 0x1906f8: 0xac800214  sw          $zero, 0x214($a0)
    ctx->pc = 0x1906f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 0));
    // 0x1906fc: 0xac850218  sw          $a1, 0x218($a0)
    ctx->pc = 0x1906fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 5));
    // 0x190700: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_190704:
    // 0x190704: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x190708: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x19070c: 0xa4a3021c  sh          $v1, 0x21C($a1)
    ctx->pc = 0x19070cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 540), (uint16_t)GPR_U32(ctx, 3));
    // 0x190710: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x190710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190714: 0xa4a30224  sh          $v1, 0x224($a1)
    ctx->pc = 0x190714u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x190718: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x19071c: 0xa4a3022c  sh          $v1, 0x22C($a1)
    ctx->pc = 0x19071cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x190720: 0xa4a30234  sh          $v1, 0x234($a1)
    ctx->pc = 0x190720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
    // 0x190724: 0xa4a3023c  sh          $v1, 0x23C($a1)
    ctx->pc = 0x190724u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 572), (uint16_t)GPR_U32(ctx, 3));
    // 0x190728: 0xa4a30244  sh          $v1, 0x244($a1)
    ctx->pc = 0x190728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 580), (uint16_t)GPR_U32(ctx, 3));
    // 0x19072c: 0xa4a3024c  sh          $v1, 0x24C($a1)
    ctx->pc = 0x19072cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 588), (uint16_t)GPR_U32(ctx, 3));
    // 0x190730: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x190730u;
    {
        const bool branch_taken_0x190730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190730u;
            // 0x190734: 0xa4a30254  sh          $v1, 0x254($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 596), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190730) {
            ctx->pc = 0x190704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190704;
        }
    }
    ctx->pc = 0x190738u;
    // 0x190738: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x190738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19073c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190740:
    // 0x190740: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x190744: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190748: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x190748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x19074c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x19074cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190750: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x190750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x190754: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x190758: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x190758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x19075c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x19075cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x190760: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x190760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x190764: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x190764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x190768: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x190768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x19076c: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x19076cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x190770: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x190770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x190774: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x190774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x190778: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x190778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x19077c: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x19077cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x190780: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x190780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x190784: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x190784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x190788: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x190788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x19078c: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x19078cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x190790: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x190790u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x190794: 0xacc0004c  sw          $zero, 0x4C($a2)
    ctx->pc = 0x190794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
    // 0x190798: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x190798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x19079c: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x19079cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x1907a0: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x1907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x1907a4: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x1907a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x1907a8: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x1907a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x1907ac: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x1907acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x1907b0: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x1907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x1907b4: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x1907b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x1907b8: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x1907b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x1907bc: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x1907bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
    // 0x1907c0: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x1907c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x1907c4: 0xacc00088  sw          $zero, 0x88($a2)
    ctx->pc = 0x1907c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 0));
    // 0x1907c8: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x1907c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x1907cc: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x1907ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x1907d0: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x1907d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x1907d4: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x1907d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
    // 0x1907d8: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x1907d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x1907dc: 0xacc000ac  sw          $zero, 0xAC($a2)
    ctx->pc = 0x1907dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
    // 0x1907e0: 0xacc000a4  sw          $zero, 0xA4($a2)
    ctx->pc = 0x1907e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 0));
    // 0x1907e4: 0xacc0009c  sw          $zero, 0x9C($a2)
    ctx->pc = 0x1907e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 0));
    // 0x1907e8: 0xacc000a0  sw          $zero, 0xA0($a2)
    ctx->pc = 0x1907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 0));
    // 0x1907ec: 0xacc000a8  sw          $zero, 0xA8($a2)
    ctx->pc = 0x1907ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 0));
    // 0x1907f0: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x1907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
    // 0x1907f4: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x1907f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x1907f8: 0xacc000c8  sw          $zero, 0xC8($a2)
    ctx->pc = 0x1907f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 0));
    // 0x1907fc: 0xacc000c0  sw          $zero, 0xC0($a2)
    ctx->pc = 0x1907fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 0));
    // 0x190800: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
    // 0x190804: 0xacc000bc  sw          $zero, 0xBC($a2)
    ctx->pc = 0x190804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 0));
    // 0x190808: 0xacc000c4  sw          $zero, 0xC4($a2)
    ctx->pc = 0x190808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 0));
    // 0x19080c: 0xacc000cc  sw          $zero, 0xCC($a2)
    ctx->pc = 0x19080cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 0));
    // 0x190810: 0xacc000b4  sw          $zero, 0xB4($a2)
    ctx->pc = 0x190810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 0));
    // 0x190814: 0xacc000e4  sw          $zero, 0xE4($a2)
    ctx->pc = 0x190814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 228), GPR_U32(ctx, 0));
    // 0x190818: 0xacc000dc  sw          $zero, 0xDC($a2)
    ctx->pc = 0x190818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 0));
    // 0x19081c: 0xacc000d4  sw          $zero, 0xD4($a2)
    ctx->pc = 0x19081cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 0));
    // 0x190820: 0xacc000d8  sw          $zero, 0xD8($a2)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 0));
    // 0x190824: 0xacc000e0  sw          $zero, 0xE0($a2)
    ctx->pc = 0x190824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 0));
    // 0x190828: 0xacc000e8  sw          $zero, 0xE8($a2)
    ctx->pc = 0x190828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 0));
    // 0x19082c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x19082Cu;
    {
        const bool branch_taken_0x19082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19082Cu;
            // 0x190830: 0xacc000d0  sw          $zero, 0xD0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19082c) {
            ctx->pc = 0x190740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190740;
        }
    }
    ctx->pc = 0x190834u;
    // 0x190834: 0x3e00008  jr          $ra
    ctx->pc = 0x190834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190834u;
            // 0x190838: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19083Cu;
}
