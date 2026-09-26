#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStatusParam__13CGameDataUsedFPs
// Address: 0x198e10 - 0x198f38
void GetStatusParam__13CGameDataUsedFPs_0x198e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStatusParam__13CGameDataUsedFPs_0x198e10");
#endif

    ctx->pc = 0x198e10u;

    // 0x198e10: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x198E10u;
    {
        const bool branch_taken_0x198e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e10) {
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198E18u;
    // 0x198e18: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198e1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198e20: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x198E20u;
    {
        const bool branch_taken_0x198e20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x198E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E20u;
            // 0x198e24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e20) {
            ctx->pc = 0x198E7Cu;
            goto label_198e7c;
        }
    }
    ctx->pc = 0x198E28u;
    // 0x198e28: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x198e2c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x198e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e30: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x198e34: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x198e34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e38: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x198e3c: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x198e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e40: 0x84830028  lh          $v1, 0x28($a0)
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x198e44: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x198e44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e48: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x198e4c: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x198e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e50: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x198e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x198e54: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x198e54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e58: 0x8483002e  lh          $v1, 0x2E($a0)
    ctx->pc = 0x198e58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x198e5c: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x198e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e60: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x198e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x198e64: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x198e64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e68: 0x84830032  lh          $v1, 0x32($a0)
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x198e6c: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x198e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e70: 0x84830034  lh          $v1, 0x34($a0)
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x198e74: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x198E74u;
    {
        const bool branch_taken_0x198e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E74u;
            // 0x198e78: 0xa4a30012  sh          $v1, 0x12($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e74) {
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198E7Cu;
label_198e7c:
    // 0x198e7c: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x198E7Cu;
    {
        const bool branch_taken_0x198e7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x198E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E7Cu;
            // 0x198e80: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e7c) {
            ctx->pc = 0x198ED8u;
            goto label_198ed8;
        }
    }
    ctx->pc = 0x198E84u;
    // 0x198e84: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x198e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x198e88: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x198e88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e8c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x198e90: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x198e90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e94: 0x84830016  lh          $v1, 0x16($a0)
    ctx->pc = 0x198e94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x198e98: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x198e98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x198e9c: 0x84830018  lh          $v1, 0x18($a0)
    ctx->pc = 0x198e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x198ea0: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x198ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ea4: 0x8483001a  lh          $v1, 0x1A($a0)
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x198ea8: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x198ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x198eac: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x198eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x198eb0: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x198eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x198eb4: 0x8483001e  lh          $v1, 0x1E($a0)
    ctx->pc = 0x198eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x198eb8: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x198eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ebc: 0x84830020  lh          $v1, 0x20($a0)
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198ec0: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x198ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ec4: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x198ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x198ec8: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x198ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ecc: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x198ed0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x198ED0u;
    {
        const bool branch_taken_0x198ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198ED0u;
            // 0x198ed4: 0xa4a30012  sh          $v1, 0x12($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ed0) {
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198ED8u;
label_198ed8:
    // 0x198ed8: 0x14c30015  bne         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x198ED8u;
    {
        const bool branch_taken_0x198ed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x198ed8) {
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198EE0u;
    // 0x198ee0: 0x84830020  lh          $v1, 0x20($a0)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198ee4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x198ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ee8: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x198ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x198eec: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x198eecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ef0: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x198ef4: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x198ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x198ef8: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x198ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x198efc: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x198efcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f00: 0x84830028  lh          $v1, 0x28($a0)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x198f04: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x198f04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f08: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x198f0c: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x198f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f10: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x198f14: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x198f14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f18: 0x8483002e  lh          $v1, 0x2E($a0)
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x198f1c: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x198f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f20: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x198f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x198f24: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x198f24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x198f28: 0x84830032  lh          $v1, 0x32($a0)
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x198f2c: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x198f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
label_198f30:
    // 0x198f30: 0x3e00008  jr          $ra
    ctx->pc = 0x198F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198F38u;
}
