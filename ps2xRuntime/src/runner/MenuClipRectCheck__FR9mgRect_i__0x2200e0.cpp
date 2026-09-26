#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuClipRectCheck__FR9mgRect<i>
// Address: 0x2200e0 - 0x220140
void MenuClipRectCheck__FR9mgRect_i__0x2200e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuClipRectCheck__FR9mgRect_i__0x2200e0");
#endif

    ctx->pc = 0x2200e0u;

    // 0x2200e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2200e4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2200E4u;
    {
        const bool branch_taken_0x2200e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2200e4) {
            ctx->pc = 0x2200F0u;
            goto label_2200f0;
        }
    }
    ctx->pc = 0x2200ECu;
    // 0x2200ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2200ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2200f0:
    // 0x2200f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2200f4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2200F4u;
    {
        const bool branch_taken_0x2200f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2200f4) {
            ctx->pc = 0x220100u;
            goto label_220100;
        }
    }
    ctx->pc = 0x2200FCu;
    // 0x2200fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2200fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_220100:
    // 0x220100: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x220104: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x220108: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x220108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22010c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x22010cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x220110: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x220110) {
            ctx->pc = 0x22011Cu;
            goto label_22011c;
        }
    }
    ctx->pc = 0x220118u;
    // 0x220118: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x220118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_22011c:
    // 0x22011c: 0x8f858784  lw          $a1, -0x787C($gp)
    ctx->pc = 0x22011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x220120: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x220124: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x220128: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x220128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22012c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22012Cu;
    {
        const bool branch_taken_0x22012c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22012c) {
            ctx->pc = 0x220138u;
            goto label_220138;
        }
    }
    ctx->pc = 0x220134u;
    // 0x220134: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x220134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_220138:
    // 0x220138: 0x3e00008  jr          $ra
    ctx->pc = 0x220138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220140u;
}
