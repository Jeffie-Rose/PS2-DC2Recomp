#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VSyncCallBack__Fi
// Address: 0x141200 - 0x14127c
void VSyncCallBack__Fi_0x141200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSyncCallBack__Fi_0x141200");
#endif

    switch (ctx->pc) {
        case 0x141200u: goto label_141200;
        case 0x141204u: goto label_141204;
        case 0x141208u: goto label_141208;
        case 0x14120cu: goto label_14120c;
        case 0x141210u: goto label_141210;
        case 0x141214u: goto label_141214;
        case 0x141218u: goto label_141218;
        case 0x14121cu: goto label_14121c;
        case 0x141220u: goto label_141220;
        case 0x141224u: goto label_141224;
        case 0x141228u: goto label_141228;
        case 0x14122cu: goto label_14122c;
        case 0x141230u: goto label_141230;
        case 0x141234u: goto label_141234;
        case 0x141238u: goto label_141238;
        case 0x14123cu: goto label_14123c;
        case 0x141240u: goto label_141240;
        case 0x141244u: goto label_141244;
        case 0x141248u: goto label_141248;
        case 0x14124cu: goto label_14124c;
        case 0x141250u: goto label_141250;
        case 0x141254u: goto label_141254;
        case 0x141258u: goto label_141258;
        case 0x14125cu: goto label_14125c;
        case 0x141260u: goto label_141260;
        case 0x141264u: goto label_141264;
        case 0x141268u: goto label_141268;
        case 0x14126cu: goto label_14126c;
        case 0x141270u: goto label_141270;
        case 0x141274u: goto label_141274;
        case 0x141278u: goto label_141278;
        default: break;
    }

    ctx->pc = 0x141200u;

label_141200:
    // 0x141200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_141204:
    // 0x141204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141208:
    // 0x141208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14120c:
    // 0x14120c: 0xaf828860  sw          $v0, -0x77A0($gp)
    ctx->pc = 0x14120cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 2));
label_141210:
    // 0x141210: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_141214:
    // 0x141214: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x141214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_141218:
    // 0x141218: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x141218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_14121c:
    // 0x14121c: 0x8f82885c  lw          $v0, -0x77A4($gp)
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
label_141220:
    // 0x141220: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x141220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
label_141224:
    // 0x141224: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x141224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_141228:
    // 0x141228: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x141228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14122c:
    // 0x14122c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14122cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_141230:
    // 0x141230: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_141234:
    // 0x141234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_141238:
    if (ctx->pc == 0x141238u) {
        ctx->pc = 0x141238u;
            // 0x141238: 0xaf8387b8  sw          $v1, -0x7848($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U32(ctx, 3));
        ctx->pc = 0x14123Cu;
        goto label_14123c;
    }
    ctx->pc = 0x141234u;
    {
        const bool branch_taken_0x141234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141234u;
            // 0x141238: 0xaf8387b8  sw          $v1, -0x7848($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141234) {
            ctx->pc = 0x141244u;
            goto label_141244;
        }
    }
    ctx->pc = 0x14123Cu;
label_14123c:
    // 0x14123c: 0x40f809  jalr        $v0
label_141240:
    if (ctx->pc == 0x141240u) {
        ctx->pc = 0x141244u;
        goto label_141244;
    }
    ctx->pc = 0x14123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141244u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x141244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141244u; }
            if (ctx->pc != 0x141244u) { return; }
        }
        }
    }
    ctx->pc = 0x141244u;
label_141244:
    // 0x141244: 0x8f828850  lw          $v0, -0x77B0($gp)
    ctx->pc = 0x141244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
label_141248:
    // 0x141248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14124c:
    // 0x14124c: 0xaf828850  sw          $v0, -0x77B0($gp)
    ctx->pc = 0x14124cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936656), GPR_U32(ctx, 2));
label_141250:
    // 0x141250: 0x8f828850  lw          $v0, -0x77B0($gp)
    ctx->pc = 0x141250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
label_141254:
    // 0x141254: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_141258:
    if (ctx->pc == 0x141258u) {
        ctx->pc = 0x14125Cu;
        goto label_14125c;
    }
    ctx->pc = 0x141254u;
    {
        const bool branch_taken_0x141254 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x141254) {
            ctx->pc = 0x141260u;
            goto label_141260;
        }
    }
    ctx->pc = 0x14125Cu;
label_14125c:
    // 0x14125c: 0xaf808850  sw          $zero, -0x77B0($gp)
    ctx->pc = 0x14125cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936656), GPR_U32(ctx, 0));
label_141260:
    // 0x141260: 0xaf808860  sw          $zero, -0x77A0($gp)
    ctx->pc = 0x141260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 0));
label_141264:
    // 0x141264: 0xf  sync
    ctx->pc = 0x141264u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_141268:
    // 0x141268: 0x42000038  ei
    ctx->pc = 0x141268u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_14126c:
    // 0x14126c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14126cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141270:
    // 0x141270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141274:
    // 0x141274: 0x3e00008  jr          $ra
label_141278:
    if (ctx->pc == 0x141278u) {
        ctx->pc = 0x141278u;
            // 0x141278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x14127Cu;
        goto label_fallthrough_0x141274;
    }
    ctx->pc = 0x141274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141274u;
            // 0x141278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x141274:
    ctx->pc = 0x14127Cu;
}
