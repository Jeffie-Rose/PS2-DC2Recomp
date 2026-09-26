#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVisualCode__9CLaserGunFi
// Address: 0x1b6f60 - 0x1b710c
void SetVisualCode__9CLaserGunFi_0x1b6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVisualCode__9CLaserGunFi_0x1b6f60");
#endif

    ctx->pc = 0x1b6f60u;

    // 0x1b6f60: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B6F60u;
    {
        const bool branch_taken_0x1b6f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F60u;
            // 0x1b6f64: 0xa4850108  sh          $a1, 0x108($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 264), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f60) {
            ctx->pc = 0x1B6F94u;
            goto label_1b6f94;
        }
    }
    ctx->pc = 0x1B6F68u;
    // 0x1b6f68: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b6f6c: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1b6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6f70: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1b6f70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b6f74: 0x3c064280  lui         $a2, 0x4280
    ctx->pc = 0x1b6f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17024 << 16));
    // 0x1b6f78: 0xac8800fc  sw          $t0, 0xFC($a0)
    ctx->pc = 0x1b6f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 8));
    // 0x1b6f7c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b6f80: 0xac880100  sw          $t0, 0x100($a0)
    ctx->pc = 0x1b6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 8));
    // 0x1b6f84: 0xac870104  sw          $a3, 0x104($a0)
    ctx->pc = 0x1b6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 7));
    // 0x1b6f88: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x1b6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x1b6f8c: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1b6f90: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1b6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
label_1b6f94:
    // 0x1b6f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6f98: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6F98u;
    {
        const bool branch_taken_0x1b6f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F98u;
            // 0x1b6f9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f98) {
            ctx->pc = 0x1B6FE4u;
            goto label_1b6fe4;
        }
    }
    ctx->pc = 0x1B6FA0u;
    // 0x1b6fa0: 0x3c063e4c  lui         $a2, 0x3E4C
    ctx->pc = 0x1b6fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15948 << 16));
    // 0x1b6fa4: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1b6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1b6fa8: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x1b6fa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1b6fac: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x1b6facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b6fb0: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x1b6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x1b6fb4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b6fb8: 0xac860100  sw          $a2, 0x100($a0)
    ctx->pc = 0x1b6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
    // 0x1b6fbc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b6fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b6fc0: 0x3c064280  lui         $a2, 0x4280
    ctx->pc = 0x1b6fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17024 << 16));
    // 0x1b6fc4: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1b6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1b6fc8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1b6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1b6fcc: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1b6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x1b6fd0: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x1b6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x1b6fd4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b6fd8: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x1b6fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x1b6fdc: 0xac830118  sw          $v1, 0x118($a0)
    ctx->pc = 0x1b6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
    // 0x1b6fe0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6fe4:
    // 0x1b6fe4: 0x14a30016  bne         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B6FE4u;
    {
        const bool branch_taken_0x1b6fe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FE4u;
            // 0x1b6fe8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fe4) {
            ctx->pc = 0x1B7040u;
            goto label_1b7040;
        }
    }
    ctx->pc = 0x1B6FECu;
    // 0x1b6fec: 0x3c063e4c  lui         $a2, 0x3E4C
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15948 << 16));
    // 0x1b6ff0: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1b6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1b6ff4: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1b6ff8: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x1b6ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b6ffc: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x1b6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x1b7000: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x1b7004: 0xac860100  sw          $a2, 0x100($a0)
    ctx->pc = 0x1b7004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
    // 0x1b7008: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1b7008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1b700c: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x1b700cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x1b7010: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1b7010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1b7014: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1b7014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1b7018: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1b7018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x1b701c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1b701cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1b7020: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1b7020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1b7024: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1b7028: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x1b7028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x1b702c: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x1b702cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x1b7030: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1b7030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1b7034: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1b7034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1b7038: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1b7038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x1b703c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7040:
    // 0x1b7040: 0x14a30018  bne         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7040u;
    {
        const bool branch_taken_0x1b7040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B7044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7040u;
            // 0x1b7044: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7040) {
            ctx->pc = 0x1B70A4u;
            goto label_1b70a4;
        }
    }
    ctx->pc = 0x1B7048u;
    // 0x1b7048: 0x3c063e4c  lui         $a2, 0x3E4C
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15948 << 16));
    // 0x1b704c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b704cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b7050: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x1b7050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1b7054: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b7054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b7058: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x1b7058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x1b705c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1b705cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x1b7060: 0xac870100  sw          $a3, 0x100($a0)
    ctx->pc = 0x1b7060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 7));
    // 0x1b7064: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x1b7064u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
    // 0x1b7068: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1b7068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1b706c: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1b706cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1b7070: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b7074: 0xac8600e0  sw          $a2, 0xE0($a0)
    ctx->pc = 0x1b7074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 6));
    // 0x1b7078: 0x3467869f  ori         $a3, $v1, 0x869F
    ctx->pc = 0x1b7078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    // 0x1b707c: 0xac8800e4  sw          $t0, 0xE4($a0)
    ctx->pc = 0x1b707cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 8));
    // 0x1b7080: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1b7084: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1b7084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1b7088: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b708c: 0xac8700f4  sw          $a3, 0xF4($a0)
    ctx->pc = 0x1b708cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 7));
    // 0x1b7090: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x1b7090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    // 0x1b7094: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x1b7094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x1b7098: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1b7098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1b709c: 0xac830118  sw          $v1, 0x118($a0)
    ctx->pc = 0x1b709cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
    // 0x1b70a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b70a4:
    // 0x1b70a4: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B70A4u;
    {
        const bool branch_taken_0x1b70a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70A4u;
            // 0x1b70a8: 0x3c053ecc  lui         $a1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70a4) {
            ctx->pc = 0x1B7104u;
            goto label_1b7104;
        }
    }
    ctx->pc = 0x1B70ACu;
    // 0x1b70ac: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x1b70acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x1b70b0: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1b70b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1b70b4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b70b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b70b8: 0xac8500fc  sw          $a1, 0xFC($a0)
    ctx->pc = 0x1b70b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
    // 0x1b70bc: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1b70bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1b70c0: 0xac850100  sw          $a1, 0x100($a0)
    ctx->pc = 0x1b70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
    // 0x1b70c4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b70c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b70c8: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x1b70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x1b70cc: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1b70ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x1b70d0: 0xac8600dc  sw          $a2, 0xDC($a0)
    ctx->pc = 0x1b70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 6));
    // 0x1b70d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1b70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1b70d8: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x1b70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x1b70dc: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1b70dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1b70e0: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x1b70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x1b70e4: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x1b70e8: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1b70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1b70ec: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x1b70f0: 0xac8700f4  sw          $a3, 0xF4($a0)
    ctx->pc = 0x1b70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 7));
    // 0x1b70f4: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x1b70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    // 0x1b70f8: 0xac850110  sw          $a1, 0x110($a0)
    ctx->pc = 0x1b70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
    // 0x1b70fc: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1b70fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1b7100: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x1b7100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
label_1b7104:
    // 0x1b7104: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B710Cu;
}
