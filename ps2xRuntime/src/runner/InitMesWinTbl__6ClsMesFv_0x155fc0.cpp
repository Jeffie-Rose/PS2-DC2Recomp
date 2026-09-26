#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMesWinTbl__6ClsMesFv
// Address: 0x155fc0 - 0x1560c4
void InitMesWinTbl__6ClsMesFv_0x155fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMesWinTbl__6ClsMesFv_0x155fc0");
#endif

    switch (ctx->pc) {
        case 0x155fc8u: goto label_155fc8;
        case 0x156088u: goto label_156088;
        default: break;
    }

    ctx->pc = 0x155fc0u;

    // 0x155fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155fc8:
    // 0x155fc8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x155fcc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x155fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x155fd0: 0xa4e001e0  sh          $zero, 0x1E0($a3)
    ctx->pc = 0x155fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 480), (uint16_t)GPR_U32(ctx, 0));
    // 0x155fd4: 0x28a30156  slti        $v1, $a1, 0x156
    ctx->pc = 0x155fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x155fd8: 0xa4e001e2  sh          $zero, 0x1E2($a3)
    ctx->pc = 0x155fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 482), (uint16_t)GPR_U32(ctx, 0));
    // 0x155fdc: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x155fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x155fe0: 0xa4e001e4  sh          $zero, 0x1E4($a3)
    ctx->pc = 0x155fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 484), (uint16_t)GPR_U32(ctx, 0));
    // 0x155fe4: 0xace001e8  sw          $zero, 0x1E8($a3)
    ctx->pc = 0x155fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 0));
    // 0x155fe8: 0xa0e001ec  sb          $zero, 0x1EC($a3)
    ctx->pc = 0x155fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 492), (uint8_t)GPR_U32(ctx, 0));
    // 0x155fec: 0xa4e001f0  sh          $zero, 0x1F0($a3)
    ctx->pc = 0x155fecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 496), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ff0: 0xa4e001f2  sh          $zero, 0x1F2($a3)
    ctx->pc = 0x155ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 498), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ff4: 0xa4e001f4  sh          $zero, 0x1F4($a3)
    ctx->pc = 0x155ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 500), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ff8: 0xace001f8  sw          $zero, 0x1F8($a3)
    ctx->pc = 0x155ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 0));
    // 0x155ffc: 0xa0e001fc  sb          $zero, 0x1FC($a3)
    ctx->pc = 0x155ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 508), (uint8_t)GPR_U32(ctx, 0));
    // 0x156000: 0xa4e00200  sh          $zero, 0x200($a3)
    ctx->pc = 0x156000u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x156004: 0xa4e00202  sh          $zero, 0x202($a3)
    ctx->pc = 0x156004u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x156008: 0xa4e00204  sh          $zero, 0x204($a3)
    ctx->pc = 0x156008u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 516), (uint16_t)GPR_U32(ctx, 0));
    // 0x15600c: 0xace00208  sw          $zero, 0x208($a3)
    ctx->pc = 0x15600cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 520), GPR_U32(ctx, 0));
    // 0x156010: 0xa0e0020c  sb          $zero, 0x20C($a3)
    ctx->pc = 0x156010u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 524), (uint8_t)GPR_U32(ctx, 0));
    // 0x156014: 0xa4e00210  sh          $zero, 0x210($a3)
    ctx->pc = 0x156014u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 528), (uint16_t)GPR_U32(ctx, 0));
    // 0x156018: 0xa4e00212  sh          $zero, 0x212($a3)
    ctx->pc = 0x156018u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 530), (uint16_t)GPR_U32(ctx, 0));
    // 0x15601c: 0xa4e00214  sh          $zero, 0x214($a3)
    ctx->pc = 0x15601cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 532), (uint16_t)GPR_U32(ctx, 0));
    // 0x156020: 0xace00218  sw          $zero, 0x218($a3)
    ctx->pc = 0x156020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 536), GPR_U32(ctx, 0));
    // 0x156024: 0xa0e0021c  sb          $zero, 0x21C($a3)
    ctx->pc = 0x156024u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 540), (uint8_t)GPR_U32(ctx, 0));
    // 0x156028: 0xa4e00220  sh          $zero, 0x220($a3)
    ctx->pc = 0x156028u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x15602c: 0xa4e00222  sh          $zero, 0x222($a3)
    ctx->pc = 0x15602cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x156030: 0xa4e00224  sh          $zero, 0x224($a3)
    ctx->pc = 0x156030u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x156034: 0xace00228  sw          $zero, 0x228($a3)
    ctx->pc = 0x156034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 552), GPR_U32(ctx, 0));
    // 0x156038: 0xa0e0022c  sb          $zero, 0x22C($a3)
    ctx->pc = 0x156038u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 556), (uint8_t)GPR_U32(ctx, 0));
    // 0x15603c: 0xa4e00230  sh          $zero, 0x230($a3)
    ctx->pc = 0x15603cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 560), (uint16_t)GPR_U32(ctx, 0));
    // 0x156040: 0xa4e00232  sh          $zero, 0x232($a3)
    ctx->pc = 0x156040u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 562), (uint16_t)GPR_U32(ctx, 0));
    // 0x156044: 0xa4e00234  sh          $zero, 0x234($a3)
    ctx->pc = 0x156044u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 564), (uint16_t)GPR_U32(ctx, 0));
    // 0x156048: 0xace00238  sw          $zero, 0x238($a3)
    ctx->pc = 0x156048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 568), GPR_U32(ctx, 0));
    // 0x15604c: 0xa0e0023c  sb          $zero, 0x23C($a3)
    ctx->pc = 0x15604cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 572), (uint8_t)GPR_U32(ctx, 0));
    // 0x156050: 0xa4e00240  sh          $zero, 0x240($a3)
    ctx->pc = 0x156050u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 576), (uint16_t)GPR_U32(ctx, 0));
    // 0x156054: 0xa4e00242  sh          $zero, 0x242($a3)
    ctx->pc = 0x156054u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 578), (uint16_t)GPR_U32(ctx, 0));
    // 0x156058: 0xa4e00244  sh          $zero, 0x244($a3)
    ctx->pc = 0x156058u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x15605c: 0xace00248  sw          $zero, 0x248($a3)
    ctx->pc = 0x15605cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 584), GPR_U32(ctx, 0));
    // 0x156060: 0xa0e0024c  sb          $zero, 0x24C($a3)
    ctx->pc = 0x156060u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 588), (uint8_t)GPR_U32(ctx, 0));
    // 0x156064: 0xa4e00250  sh          $zero, 0x250($a3)
    ctx->pc = 0x156064u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 592), (uint16_t)GPR_U32(ctx, 0));
    // 0x156068: 0xa4e00252  sh          $zero, 0x252($a3)
    ctx->pc = 0x156068u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 594), (uint16_t)GPR_U32(ctx, 0));
    // 0x15606c: 0xa4e00254  sh          $zero, 0x254($a3)
    ctx->pc = 0x15606cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 596), (uint16_t)GPR_U32(ctx, 0));
    // 0x156070: 0xace00258  sw          $zero, 0x258($a3)
    ctx->pc = 0x156070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 600), GPR_U32(ctx, 0));
    // 0x156074: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x156074u;
    {
        const bool branch_taken_0x156074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156074u;
            // 0x156078: 0xa0e0025c  sb          $zero, 0x25C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 604), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156074) {
            ctx->pc = 0x155FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155fc8;
        }
    }
    ctx->pc = 0x15607Cu;
    // 0x15607c: 0x28a1015e  slti        $at, $a1, 0x15E
    ctx->pc = 0x15607cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)350) ? 1 : 0);
    // 0x156080: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x156080u;
    {
        const bool branch_taken_0x156080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156080u;
            // 0x156084: 0x53100  sll         $a2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156080) {
            ctx->pc = 0x1560B0u;
            goto label_1560b0;
        }
    }
    ctx->pc = 0x156088u;
label_156088:
    // 0x156088: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x156088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15608c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x156090: 0xa4e001e0  sh          $zero, 0x1E0($a3)
    ctx->pc = 0x156090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 480), (uint16_t)GPR_U32(ctx, 0));
    // 0x156094: 0x28a3015e  slti        $v1, $a1, 0x15E
    ctx->pc = 0x156094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)350) ? 1 : 0);
    // 0x156098: 0xa4e001e2  sh          $zero, 0x1E2($a3)
    ctx->pc = 0x156098u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 482), (uint16_t)GPR_U32(ctx, 0));
    // 0x15609c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1560a0: 0xa4e001e4  sh          $zero, 0x1E4($a3)
    ctx->pc = 0x1560a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 484), (uint16_t)GPR_U32(ctx, 0));
    // 0x1560a4: 0xace001e8  sw          $zero, 0x1E8($a3)
    ctx->pc = 0x1560a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 0));
    // 0x1560a8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1560A8u;
    {
        const bool branch_taken_0x1560a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560A8u;
            // 0x1560ac: 0xa0e001ec  sb          $zero, 0x1EC($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 492), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560a8) {
            ctx->pc = 0x156088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156088;
        }
    }
    ctx->pc = 0x1560B0u;
label_1560b0:
    // 0x1560b0: 0xac8017c0  sw          $zero, 0x17C0($a0)
    ctx->pc = 0x1560b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6080), GPR_U32(ctx, 0));
    // 0x1560b4: 0xac8017c4  sw          $zero, 0x17C4($a0)
    ctx->pc = 0x1560b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6084), GPR_U32(ctx, 0));
    // 0x1560b8: 0xac8017c8  sw          $zero, 0x17C8($a0)
    ctx->pc = 0x1560b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6088), GPR_U32(ctx, 0));
    // 0x1560bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1560BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560BCu;
            // 0x1560c0: 0xac8017cc  sw          $zero, 0x17CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1560C4u;
}
