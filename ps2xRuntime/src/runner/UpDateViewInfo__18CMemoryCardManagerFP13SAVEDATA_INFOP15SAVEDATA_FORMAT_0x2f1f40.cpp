#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDateViewInfo__18CMemoryCardManagerFP13SAVEDATA_INFOP15SAVEDATA_FORMAT
// Address: 0x2f1f40 - 0x2f1fc0
void UpDateViewInfo__18CMemoryCardManagerFP13SAVEDATA_INFOP15SAVEDATA_FORMAT_0x2f1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDateViewInfo__18CMemoryCardManagerFP13SAVEDATA_INFOP15SAVEDATA_FORMAT_0x2f1f40");
#endif

    ctx->pc = 0x2f1f40u;

    // 0x2f1f40: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F1F40u;
    {
        const bool branch_taken_0x2f1f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f40) {
            ctx->pc = 0x2F1FB8u;
            goto label_2f1fb8;
        }
    }
    ctx->pc = 0x2F1F48u;
    // 0x2f1f48: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1F48u;
    {
        const bool branch_taken_0x2f1f48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f48) {
            ctx->pc = 0x2F1F58u;
            goto label_2f1f58;
        }
    }
    ctx->pc = 0x2F1F50u;
    // 0x2f1f50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F1F50u;
    {
        const bool branch_taken_0x2f1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f50) {
            ctx->pc = 0x2F1FB8u;
            goto label_2f1fb8;
        }
    }
    ctx->pc = 0x2F1F58u;
label_2f1f58:
    // 0x2f1f58: 0x84c30034  lh          $v1, 0x34($a2)
    ctx->pc = 0x2f1f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x2f1f5c: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x2f1f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f60: 0x84c30030  lh          $v1, 0x30($a2)
    ctx->pc = 0x2f1f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2f1f64: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x2f1f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f68: 0x8c8308ec  lw          $v1, 0x8EC($a0)
    ctx->pc = 0x2f1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2284)));
    // 0x2f1f6c: 0x84630038  lh          $v1, 0x38($v1)
    ctx->pc = 0x2f1f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2f1f70: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x2f1f70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f74: 0x8c8308ec  lw          $v1, 0x8EC($a0)
    ctx->pc = 0x2f1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2284)));
    // 0x2f1f78: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x2f1f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2f1f7c: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x2f1f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f80: 0xdcc31a80  ld          $v1, 0x1A80($a2)
    ctx->pc = 0x2f1f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 6784)));
    // 0x2f1f84: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x2f1f84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x2f1f88: 0x84c31a88  lh          $v1, 0x1A88($a2)
    ctx->pc = 0x2f1f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6792)));
    // 0x2f1f8c: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x2f1f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f90: 0x84c30018  lh          $v1, 0x18($a2)
    ctx->pc = 0x2f1f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2f1f94: 0xa4a30018  sh          $v1, 0x18($a1)
    ctx->pc = 0x2f1f94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1f98: 0x90c30046  lbu         $v1, 0x46($a2)
    ctx->pc = 0x2f1f98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 70)));
    // 0x2f1f9c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2f1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2f1fa0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2f1fa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f1fa4: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x2f1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x2f1fa8: 0xdcc30078  ld          $v1, 0x78($a2)
    ctx->pc = 0x2f1fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2f1fac: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x2f1facu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x2f1fb0: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x2f1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2f1fb4: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x2f1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_2f1fb8:
    // 0x2f1fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1FC0u;
}
